#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
    //
protected:
    string name;
    string gender;
    int ID;
    int age;

public:
    Person(string name, string gender, int ID, int age) : name(name), gender(gender), ID(ID), age(age)
    {
    }

    // getter fuctions
    int get_ID()
    {
        return ID;
    }
    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }

    // setter fuctions
    void set_name(string name)
    {
        this->name = name;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    void set_gender(const string &gender)
    {
        this->gender = gender;
    }

    // display file function for child classes
    virtual void display_profile() const = 0;

    // pure virtual class method
    virtual string serialize_data() const = 0;
    // destructor
    virtual ~Person()
    {
    }
};