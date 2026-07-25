#pragma once
#include "person.h"
using namespace std;

class Doctor : public Person
{

private:
    string speciality;
    int fee;

public:
    // constructor
    Doctor(string name, string gender, int ID, int age, string speciality, int fee) : Person(name, gender, ID, age), speciality(speciality), fee(fee) {};

    // getters
    string doctor_speciality() const
    {
        return this->speciality;
    }
    int  doctor_fee() const
    {
        return this->fee;
    }

    // ovveriden functions

    void display_profile() const override
    {
        cout << "Doctor : " << ID << " Details " << endl;
        cout << "Doctor  name : " << name << endl;
        cout << "Doctor  ID : " << ID << endl;
        cout << "Gender : " << gender << endl;
        cout << "Age : " << age << endl;
        cout << "Speciality : " << speciality << endl;
        cout << "Fee : $" << fee << endl
             << endl;
    }

    string serialize_data() const override
    {
        return "Doctor," + to_string(ID) + "," + name + "," + to_string(age) + "," + gender + "," + speciality +
               "," + to_string(fee) + "\n";
    }

    // destructor
    ~Doctor() override
    {
    }
};