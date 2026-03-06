#pragma once
#include "person.h"

class staff : public person
{
private:
    string role;
    float salary;

public:
    staff()
    {
    }
    staff(string role, float salary)
    {
        this->role = role;
        this->salary = salary;
    }
    void set_role(string role)
    {
        this->role = role;
    }
    void set_salary()
    {
        this->salary = salary;
    }

    string get_role()
    {
        return role;
    }
    float get_salary()
    {
        return salary;
    }
    void print()
    {
        person::print();
        cout << "The role is:" << role << endl;
        cout << "salary is:" << salary << endl;
    }
    void information()
    {
        person::information();
        cout << "The role is:" << endl;
        cin >> role;
        cout << "salary is:" <<endl;
        cin>>salary;
    }
};