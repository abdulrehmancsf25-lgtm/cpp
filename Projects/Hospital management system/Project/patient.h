#pragma once
#include "person.h"
using namespace std;

class Patient : public Person
{
private:
    string blood_group, disease;
    int bed_number;

public:
    // constructor
    Patient(string name, string gender, int ID, int age, string blood_GR, string disease, int bed) : Person(name, gender, ID, age), blood_group(blood_GR), disease(disease), bed_number(bed) {};

    // getters
    string get_blood_grp() const
    {
        return blood_group;
    }
    int get_bed_number() const
    {
        return bed_number;
    }

    // patient profile
    void display_profile() const override
    {
        cout << "Patient No: " << ID << " Details " << endl;
        cout << "Patient name : " << name << endl;
        cout << "Gender : " << gender << endl;
        cout << "Patient ID : " << ID << endl;
        cout << "Age : " << age << endl;
        cout << "Blood_Group : " << blood_group << endl;
        cout << "Disease : " << disease << endl
             << endl;
    }
    // to save patient's data
    string serialize_data() const override
    {
        return "Patient," + to_string(ID) + "," + name + "," + to_string(age) + "," + gender + "," + blood_group +
               "," + disease + "," + to_string(bed_number) + "\n";
    }
    // destructor
    ~Patient() override
    {
    }
};
