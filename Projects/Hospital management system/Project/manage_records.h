#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "data.h"
#include "person.h"
#include "rapidcsv.h"
using namespace std;

class Manage_records : public DataStorage
{
private:
    Hospital &ref;

    
    void ensure_newline(const string& filename) {
    ifstream file_in(filename, ios::ate); // Open at the end
    if (file_in.is_open() && file_in.tellg() > 0) {
        file_in.seekg(-1, ios::end); 
        char last_char;
        file_in.get(last_char);
        
        // CLOSE the read file before trying to write to it!
        file_in.close(); 

        if (last_char != '\n') {
            ofstream file_out(filename, ios::app);
            file_out << "\n";
            file_out.close(); // Close the write file too
        }
    } else if (file_in.is_open()) {
        file_in.close();
    }
}

public:
    // constructor to get reference of currrent object
    Manage_records(Hospital &h) : ref(h)
    {
    }

    // delete any record 
    void delete_record( int id)
    {
          string filename ,temp ;
          temp = to_string(id) ;
          if(temp[0] == '5')
            filename = "patient_records.csv";
          else if(temp[0] == '1')
            filename = "doctor_records.csv" ;
        try
        {
            rapidcsv::Document doc(filename, rapidcsv::LabelParams(-1, -1));
            // fetching id column to get ids
            vector<int> old_ids = doc.GetColumn<int>(1);

            auto it = find(old_ids.begin(), old_ids.end(), id);
            // check if id is found or not

            if (it != old_ids.end())
            {
                // get row number to delete that record
                size_t row_number = distance(old_ids.begin(), it);

                // delete row from document (csv file)'
                doc.RemoveRow(row_number);

                // now saving  it to rewrite in same file
                doc.Save();
                cout << "ID number: " << id << " is successfully deleted!" << endl;
            }
            else
            {
                cout << "Id : " << id << " Not present!" << endl;
            }
        }
        catch (const exception &e)
        {
            cout << "Error: " << e.what() << endl;
        }
    }

    // view previus saved records in our file

    void previous_records()
    {

        // 1.PATIENT RECORDS
        ifstream pf("patient_records.csv");

        cout << "**************************" << endl;
        cout << "*    Patient Records     *" << endl;
        cout << "**************************" << endl;

        if (!pf)
        {
            cout << "No existing patient records found.\n"
                 << endl;
        }
        else
        {
            string line;
            while (getline(pf, line))
            {
                if (line.empty())
                    continue;

                stringstream ss(line);
                vector<string> fields;
                string field;

                while (getline(ss, field, ','))
                {
                    fields.push_back(field);
                }

                // Safety check
                if (fields.size() < 7)
                    continue;

                cout << "Patient ID : " << fields[1] << "\n"
                     << "Name : " << fields[2] << "\n"
                     << "Age: " << fields[3] << "\n"
                     << "Gender : " << fields[4] << "\n"
                     << "Blood_Group : " << fields[5] << "\n"
                     << "Disease : " << fields[6] << "\n";

                // Check if Bed Number exists
                if (fields.size() > 7)
                {
                    cout << "Bed Number : " << fields[7] << "\n";
                }
                cout << "-----------------------\n\n";
            }
            pf.close();
        }

        // 2.  DOCTOR RECORDS

        ifstream df("doctor_records.csv");

        cout << "**************************" << endl;
        cout << "*    Doctor Records      *" << endl;
        cout << "**************************" << endl;

        if (!df)
        {
            cout << "No existing doctor records found.\n"
                 << endl;
        }
        else
        {
            string line;
            while (getline(df, line))
            {
                if (line.empty())
                    continue;

                stringstream ss(line);
                vector<string> fields;
                string field;

                while (getline(ss, field, ','))
                {
                    fields.push_back(field);
                }

                // Safety check
                if (fields.size() < 7)
                    continue;

                cout << "Doctor ID : " << fields[1] << "\n"
                     << "Name : " << fields[2] << "\n"
                     << "Age: " << fields[3] << "\n"
                     << "Gender : " << fields[4] << "\n"
                     << "Speciality : " << fields[5] << "\n"
                     << "Fee : $" << fields[6] << "\n"
                     << "-----------------------\n\n";
            }
            df.close();
        }
    }


    // save person data to file using file handling
    void storeData() override
    {
        // ask the hospital for the current list of people right now!
        vector<Person *> current_people = ref.get_people();
        
    // Ensure files end with a newline before appending
    ensure_newline("patient_records.csv");
    ensure_newline("doctor_records.csv");

        ofstream write_P_Data("patient_records.csv", ios::app);
        ofstream write_D_Data("doctor_records.csv", ios::app);
        // Safety check
        if (write_P_Data.is_open())
        {

            for (Person *p : current_people)
            {
                string temp = to_string(p->get_ID());
                if (temp[0] == '5')
                    write_P_Data << p->serialize_data();
                   
            }
            write_P_Data.close();
        }
        else
        {
            cout << "Error: File not opened to save data!" << endl;
            cout << "Please Retry" << endl;
        }
        // Safety check
        if (write_D_Data.is_open())
        {

            for (Person *p : current_people)
            {
                string temp = to_string(p->get_ID());
                if (temp[0] == '1')
                    write_D_Data << p->serialize_data();
                    
            }
            write_D_Data.close();
        }
        else
        {
            cout << "Error: File not opened to save data!" << endl;
            cout << "Please Retry" << endl;
        }

        cout << "\nData saved Successfully!" << endl;

        ref.clear_people(); // clearing current data for duplicate saving
    }


// destructor
~Manage_records() override{}

} ;

