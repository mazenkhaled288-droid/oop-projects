#pragma once
#include "iostream"
#include <string>
using namespace std;

class phone_number
{
private:
    string phone;
    string type;

public:
    phone_number()
    {
    }
    phone_number(string phone, string type)
    {
        this->phone = phone;
        this->type = type;
    }
    void set_phone(string phone)
    {
        this->phone = phone;
    }
    void set_type(string type)
    {
        this->type = type;
    }
    string get_phone()
    {
        return phone;
    }
    string get_type()
    {
        return type;
    }
    void print()
    {
        cout << "Please enter phone number:" << phone << endl;
        cout << "Please enter phone type:" << type << endl;
    }
    void information()
    {
        cout << "Please enter phone number:" << endl;
        cin >> phone;
        cout << "PLease enter phone type:" << endl;
        cin >> type;
    }
};