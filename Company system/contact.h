#pragma once
#include "iostream"
#include <string>
#include "phone.h"
using namespace std;
class Employee
{
private:
    int id;
    string name;
    string city;
    string note;
    string gender;
    phone_number phones[4];
    int x;

public:
    Employee()
    {
    }
    Employee(int id, string name, string city, string note, string gender)
    {
        this->id = id;
        this->name = name;
        this->city = city;
        this->note = note;
        this->gender = gender;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_city(string city)
    {
        this->city = city;
    }
    void set_note(string note)
    {
        this->note = note;
    }
    void set_gender(string gender)
    {
        this->gender = gender;
    }
    int get_id()
    {
        return id;
    }
    string get_name()
    {
        return name;
    }
    string get_city()
    {
        return city;
    }
    string get_note()
    {
        return note;
    }
    string get_gender()
    {
        return gender;
    }
    void print()
    {
        cout << "Please enter id:" << id << endl;
        cout << "Please enter name:" << name << endl;
        cout << "Please enter city:" << city << endl;
        cout << "Please enter note:" << note << endl;
        cout << "Please enter gender:" << gender << endl;
        for (int i = 0; i < x; i++)
        {
            phones[i].print();
        }
    }
    void information()
    {
        cout << "Please enter id:" << endl;
        cin >> id;
        cout << "Please enter name:" << endl;
        cin >> name;
        cout << "Please enter city:" << endl;
        cin >> city;
        cout << "Please enter note:" << endl;
        cin >> note;
        cout << "Please enter number of phones number (1 - 4) :" << endl;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            phones[i].information();
        }
    }
};