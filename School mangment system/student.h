#pragma once
#include "person.h"
#include <iostream> 

class student : public person
{
private:
    string grade_level;
public:
    student()
    {

    }
    student(string grade_level )
    {
        
    }
    void set_grades()
    {
        this->grade_level= grade_level;
    }
    string get_grade_level()
    {
        return grade_level;
    }
    void print()
    {
        person::print();
        cout << "Grade level is: " << grade_level << endl;
      
    }
    void information()
    {
        person::information();
        cout<<"Please enter your grade level:"<<endl;
        cin>> grade_level;
    }
};