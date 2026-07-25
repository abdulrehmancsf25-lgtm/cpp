#include "patient.h"
#include "doctor.h"
#include "hospital.h"
#include "manage_records.h"
#include "id_manager.h"
using namespace std;

void welcome_note()
{
    cout << "**********************************" << endl;
    cout << "*  Welcome to Hospital Services  *" << endl;
    cout << "**********************************" << endl;
}
int main()
{

    Hospital hospital;
    Manage_records records(hospital);
    id_manager manager;
    int choice;
    // WELCOME PAGE
    welcome_note();

    while (true)
    {
        // Main page options
        cout << "\nMenu\n";
        // delay to make good view
        this_thread::sleep_for(chrono::seconds(1));
        cout << "1) Add Patient " << endl;
        cout << "2) Add Doctor" << endl;
        cout << "3) Save data to file" << endl;
        cout << "4) View data in file (Previous Records)" << endl;
        cout << "5) Edit existing profiles " << endl;
        cout << "6) Delete records " << endl;
        cout << "7) For exit" << endl;
        cout << "Enter your choice  ";
        cin >> choice;


        // if user enters wrong type of data
        while (cin.fail())
        {
            cin.clear();
            // clearing buffer memory to avoid use of wrong input
            cin.ignore(10000 ,'\n');
            cout << "Wrong input! Please enter a number " << endl;
            cin >> choice ;
        }
        if (choice == 7)
        {
            // delay
            this_thread::sleep_for(chrono::seconds(2));
            cout << "Exiting program" << endl;
            break;
        }
        string name, gender;
        int id, age;
        switch (choice)
        {
        case 1:
        {
            string disease, blood_group;
            int bed;
            int temp ;
            cout << " Type 0 for auto generate  id or 1 for manually! ";
            cin >> temp;
            if (temp == 0)
            {
                manager.auto_generate_id("patient", id);
            }
            else{
                cout << "Enter Patient ID(format:5XXXX): ";
                cin >> id;
                while (!manager.is_patient_id(id))
                {
                    cin >> id;
                }
                // verify for not dupliction
                while (!hospital.is_valid_ID ("patient_records.csv" , id))
                {
                    cout << "ID already in use !" << endl;
                    cout << "Please enter a valid ID" << endl;
                    cin >> id;
                }

           
        }
            cin.ignore(10000, '\n');
            cout << "Enter name : ";
            getline(cin, name);
            cout << "Enter age : ";
            cin >> age;
            cout << "Enter gender : ";
            cin >> gender;
            cout << "Enter blood group : ";
            cin >> blood_group;
            cin.ignore(10000, '\n');
            cout << "Enter disease : ";
            getline(cin, disease);
            cout << "Enter bed number : ";
            cin >> bed;

            // dynamicallly allocating patient to hospital
            Patient *patient = new Patient(name, gender, id, age, blood_group, disease, bed);
            hospital.add_people(patient);
            cout << "Patient added successfully!\n";
            break;
        }
        case 2:
        {
            string specialty;
            int fee;
            int temp;
            cout << " Type 0 for auto generate  id or 1 for manually! ";
            cin >> temp;
            if (temp == 0)
            {
                manager.auto_generate_id("doctor", id);
            }
            else
            {
                cout << "Enter Doctor ID(format :1XXX): ";
                cin >> id;
                while (!manager.is_doctor_id(id))
                {
                    cin >> id;
                }
                // verify for not dupliction
                while (!hospital.is_valid_ID("doctor_records.csv" ,id))
                {
                    cout << "ID already in use !" << endl;
                    cout << "Please enter a valid ID" << endl;
                    cin >> id;
                }

                
            }
            cin.ignore(10000, '\n');
            cout << "Enter Name : ";
            getline(cin, name);
            cout << "Enter Age : ";
            cin >> age;
            cin.ignore(10000, '\n');
            cout << "Enter Gender : ";
            getline(cin, gender);
            cout << "Enter Specialty : ";
            getline(cin, specialty);
            cout << "Enter Fee : $ ";
            cin >> fee;
            cin.ignore(10000, '\n');

            // Dynamically allocating  a new Doctor to Hospital
            hospital.add_people(new Doctor(name, gender, id, age, specialty, fee));
            cout << "Doctor added successfully!\n";
            break;
        }
        case 3:
        {
            records.storeData();
            break;
        }
        case 4:
        {
            records.previous_records();
            break;
        }
        case 5:
        {

            cout << "Please enter ID to edit profile ";
            cin >> id;
            hospital.edit_profile(id);
            break;
        }
        case 6:
        {

            int d_id;
            cout << "Please enter id to delete a record from Hospital records" << endl;
            cin >> d_id;
            records.delete_record(d_id);
            break;
        }
        default:
            cout << "Invalid choice! " << endl;
            cout << "Try again " << endl;
        }
    }

    return 0;
}