#pragma once
#include "iostream"
#include <string>
#include "contact.h"
using namespace std;

class contact_book
{
    private:
    int counter=0;
    Employee Employees[1000];
    public:
    void add_Employee()
    {
        Employee E;
        E.information();
        Employees[counter]=E;
        counter++;
    }
    void delete_Employee()
    {
        cout<<"Please enter id for employee to delete"<<endl;
        int x;
        cin>>x;
        int i;
        for(int i=0;i<counter;i++)
        {
            if(x==Employees[i].get_id())
            {
                Employees[i]=Employees[counter-1];
                break;
            }  
        }
        if (i==counter)
        {
            cout<<"The employee not found"<<endl;
        }
    }
    void edit_Employee()
    {
         cout<<"Please enter id for employee to delete"<<endl;
        int x;
        cin>>x;
        int i;
        for(int i=0;i<counter;i++)
        {
            if(x==Employees[i].get_id())
            {
                Employees[i].information();
                break;
            }  
        }
        if (i==counter)
        {
            cout<<"The employee not found"<<endl;
        } 
    }
    void search()
    {
           cout<<"Please enter id for employee to delete"<<endl;
        int x;
        cin>>x;
        int i;
        for(int i=0;i<counter;i++)
        {
            if(x==Employees[i].get_id())
            {
                Employees[i].print();
                break;
            }  
        }
        if (i==counter)
        {
            cout<<"The employee not found"<<endl;
        } 
    }
    void print_all()
    {
        for(int i=0;i<counter;i++)
        {
            Employees[i].print();
        }
    }

};