#pragma once
#include <iostream>
#include <string>
using namespace std;

class person
{
protected:
    string name;
    int age;
    string gender;
    string address;
    string phone_number;
    string email;
    int id;
  
public:
    person()
    {
      
    }
    person(string name, int age,string gender,string address,string phone_number,string email,int id)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->address = address;
        this->phone_number = phone_number;
        this->email= email;
        this->id = id;
     
       
    }
    void set_Name(string name)
    {
        this->name = name;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    void set_gender(string gender)
    {
        this->gender=gender;
    }
    void set_address(string address)
    {
        this->address=address;
    }
    void set_phone_number(string phone_number)
    {
        this->phone_number=phone_number;
    }
    void set_email(string email)
    {
        this->email=email;
    }
    void set_id(int id)
    {
        this->id=id;
    }
 
    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
    string get_gender()
    {
        return gender;
    }
    string get_address()
    {
        return address;
    }
    string get_phone_number()
    {
        return phone_number;
    }
    string get_email()
    {
        return email;
    }
    int get_id()
    {
        return id;
    }

    void print()
    {
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
        cout << "Gender is: " << gender << endl;
        cout << "Address is: " << address << endl;
        cout << "Phone number is: " << phone_number << endl;
        cout << "Email is: " << email << endl;
        cout << "ID is: " << id << endl;

    }
    void information()
    {
        cout<<"Please enter your Name:"<<endl;
        cin>>name;
        cout<<"Please enter your Age:"<<endl;
        cin>>age;
        cout<<"Please enter your Gender:"<<endl;
        cin>>gender;
        cout<<"Please enter your Address:"<<endl;
        cin>>address;
        cout<<"Please enter your Phone number:"<<endl;
        cin>>phone_number;
        cout<<"Please enter your Email:"<<endl;
        cin>>email;
        cout<<"Please enter your Id:"<<endl;
        cin>>id;
    } 
};