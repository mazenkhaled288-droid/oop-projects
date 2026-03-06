#pragma once
#include"person.h"

class teacher:public person
{
    private:
    string subject_specialization;
    float salary;
    public:
    teacher()
    {
    }
    teacher(string subject_specialization,float salary)
    {
        this->subject_specialization=subject_specialization;
        this->salary=salary;
    }
    void set_subject_speacialization(string subject_specialization)
    {
        this->subject_specialization=subject_specialization;
    }
    void set_salary(float salary)
    {
        this->salary=salary;
    }
    string get_subject_specialization()
    {
        return subject_specialization;
    }
    float get_salary()
    {
        return salary;
    }
    void print()
    {
        person::print();
        cout<<"subject specialization is:"<<subject_specialization<<endl;
        cout<<"salary is:"<<salary<<endl;
    }
    void information()
    {
        person::information();
        cout<<"subject specialization is:"<<endl;
        cin>>subject_specialization;
        cout<<"salary is:"<<endl;
        cin>>salary;
    }
};