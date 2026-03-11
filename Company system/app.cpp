#include <iostream>
#include "contact book.h"
using namespace std;

int main()
{
    int n;
    contact_book c;
    do
    {
        cout << "Enter 0 To Exit" << endl;
        cout << "Enter 1 To Add Employee" << endl;
        cout << "Enter 2 To Delete Employee" << endl;
        cout << "Enter 3 To Edit Employee" << endl;
        cout << "Enter 4 To Search About Employee" << endl;
        cout << "Enter 5 To Print All Employee" << endl;
        cin >> n;
        switch (n)
        {
        case 0:
            return 0;
        case 1:
            c.add_Employee();
            break;
        case 2:
            c.delete_Employee();
            break;
        case 3:
            c.edit_Employee();
            break;
        case 4:
            c.search();
            break;
        case 5:
            c.print_all();
            break;
        }
    } while (n != 0);
} 
