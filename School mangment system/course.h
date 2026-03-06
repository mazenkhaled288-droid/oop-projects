#pragma once
#include "person.h"

class course
{
private:
    string course_code;
    string course_name;
    string teatcher_name;

public:
    course()
    {
    }
    course(string course_code, string course_name, string teatcher_name)
    {
        this->course_code = course_code;
        this->course_name = course_name;
        this->teatcher_name = teatcher_name;
    }
    void set_course_code(string course_code)
    {
        this->course_code = course_code;
    }
    void set_course_name(string course_name)
    {
        this->course_name = course_name;
    }
    void set_teatcher_name(string teatcher_name)
    {
        this->teatcher_name = teatcher_name;
    }
    string get_course_code()
    {
        return course_code;
    }
    string get_course_name()
    {
        return course_name;
    }
    string get_teatcher_name()
    {
        return teatcher_name;
    }
    void print()
    {
        cout << "course code is:" << course_code << endl;
        cout << "course name is:" << course_name << endl;
        cout << "Teatcher name is:" << teatcher_name << endl;
    }
    void information()
    {
        cout << "course code is:" << endl;
        cin >> course_code;
        cout << "course name is:" << endl;
        cin>>course_name;
        cout << "Teatcher name is:"<< endl;
        cin>>teatcher_name;
    }
};
