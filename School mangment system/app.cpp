#include <iostream>
#include "school.h"
#include "staff.h"
#include "course.h"
#include "Teacher.h"
#include "student.h"
#include "class room.h"
using namespace std;

int main()
{
   int n;
   school sh;
   do
   {
      cout << "Enter 0 To Exit" << endl;
      cout << "Enter 1 To Add student" << endl;
      cout << "Enter 2 To Add teacher" << endl;
      cout << "Enter 3 To Add staff" << endl;
      cout << "Enter 4 To Add course" << endl;
      cout << "Enter 5 To Add room" << endl;
      cout << "Enter 6 To Print student" << endl;
      cout << "Enter 7 To Print teacher" << endl;
      cout << "Enter 8 To Print staff" << endl;
      cout << "Enter 9 To print course" << endl;
      cout << "Enter 10 To print room" << endl;
      cin >> n;
      switch (n)
      {
      case 0:
         return 0;
      case 1:
      {
         student s;
         s.information();
         sh.add_student(s);
         break;
      }
      case 2:
      {
         teacher t;
         t.information();
         sh.add_teacher(t);
         break;
      }
      case 3:
      {
         staff st;
         st.information();
         sh.add_staff(st);
         break;
      }
      case 4:
      {
         course c;
         c.information();
         sh.add_courses(c);
         break;
      }
      case 5:
      {
         class room r;
         r.information();
         sh.add_room(r);
      }
      case 6:
         sh.print_students();
         break;
      case 7:
         sh.print_teacher();
         break;
      case 8:
         sh.print_staff();
         break;
      case 9:
         sh.print_course();
         break;
      case 10:
         sh.print_room();
         break;
      }
   } 
   while (n != 0);
  
}
