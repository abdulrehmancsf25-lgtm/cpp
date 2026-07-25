#include <fstream> // for file handling
#include <sstream> // to deal with csv (comma separated values)
#include <thread>  // control execution of delay
#include <chrono>  // for delay
#include <vector>
#include "person.h"
#include "rapidcsv.h"
#include <filesystem>
using namespace std;

class Hospital
{
private:
    vector<Person *> people; // for storing person pouinters

public:
    // getter for people
    const vector<Person *>& get_people()
    {
        return people;
    }
   

    // to add a person in hospital record
    void add_people( Person *p)
    {
        // first check if same id exists or not
        people.push_back(p);
    }

    bool is_valid_ID( string filename , int id)
    {
        // empty case
        if (people.empty() || filesystem::is_empty(filename))
            return true;

        for (Person *p : people)
        {
            if (p->get_ID() == id)
                return false;
        }

        // now  check in our existing records in file
        try
        {
            rapidcsv::Document doc(filename, rapidcsv::LabelParams(-1, -1));
            vector<int> old_ids = doc.GetColumn<int>(1);

            for (int i = 0; i < old_ids.size(); i++)
            {
                if (old_ids[i] == id)
                    return false; // duplicate found
            }
        }
        catch (const exception &e)
        {
            cout << "Error:" << e.what() << endl;
        }

        return true; // valid id  to be created
    }
    // function for editing profiles
    void edit_profile(const int &id)
    {
        // if there is not data in our storage
        if (people.empty())
        {
            cout << "No current profiles!" << endl;
            cout << "Please add ID first to make any change " << endl;
            return;
        }

        bool present = false;
        // in case if id found we will save the pointer for working with it
        Person *profile_to_edit = NULL;
        for (Person *p : people)
        {
            if (p->get_ID() == id)
            {
                present = true;
                profile_to_edit = p;
                break;
            }
        }
        if (!present)
        {
            cout << "ID not found in current profiles !" << endl;
            return;
        }
        // if id is present in our data
        if (present)
        {
            int choice;
            cout << "**************" << endl;
            cout << "* ID founded *" << endl;
            cout << "**************" << endl;
            while (true)
            {
                // delay for good look
                this_thread::sleep_for(chrono::seconds(1));
                // Menu
                cout << "\nOptions\n ";
                cout << "1) Change name " << endl;
                cout << "2) Change age " << endl;
                cout << "3) Change gender " << endl;
                cout << "4) Exit " << endl;
                cout << "Enter choice ";
                cin >> choice;

                // if wrong data type is provided as input
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(10000);
                    cout << "Wrong input! Please enter a number " << endl;
                    continue;
                }

                switch (choice)
                {
                case 1:
                { // name chenge
                    cin.ignore(1000, '\n');
                    string new_name;
                    cout << "Enter name to edit ";
                    getline(cin, new_name);
                    profile_to_edit->set_name(new_name);
                    cout << "Name edited successfully!" << endl;
                    break;
                }
                case 2:
                { // age change
                    int new_age;
                    cout << "Enter age to edit ";
                    cin >> new_age;
                    profile_to_edit->set_age(new_age);
                    cout << "Age edited successfully!" << endl;
                    break;
                }
                case 3:
                { // gender change
                    string gender;
                    cout << "Enter gender to edit ";
                    cin >> gender;
                    profile_to_edit->set_gender(gender);
                    cout << "Gender edited successfully!" << endl;
                    break;
                }
                case 4: // exit case
                    return;
                default:
                    cout << " Invalid choice !" << endl;
                    cout << "Try again " << endl;
                }
            }
        }
    }
    
  
    //  clear current vector of people after saving in file for no duplication
    void clear_people(){
        for(Person* p :people){
            delete p ;
        }
        people.clear() ;
    }
};