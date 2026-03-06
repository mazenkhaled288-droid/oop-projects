#pragma once
#include <iostream>
#include <string>
#include "Teacher.h"
#include "student.h"
#include "staff.h"
#include "course.h"
#include "class room.h"
using namespace std;

class school
{
private:
    string school_Name;
    string address;
    string principalName;
    student students[1000];
    teacher teachers[50];
    staff staffs[50];
    course courses[6];
    class room rooms[50];
    int student_counter = 0;
    int teacher_counter = 0;
    int staff_counter = 0;
    int course_counter = 0;
    int room_counter = 0;

public:
    void add_student(student stud)
    {
        students[0] = stud;
        student_counter++;
    }
    void add_teacher(teacher t)
    {
        teachers[0] = t;
        teacher_counter++;
    }
    void add_staff(staff st)
    {
        staffs[0] = st;
        staff_counter++;
    }
    void add_courses(course c)
    {
        courses[0] = c;
        course_counter++;
    }
    void add_room(room r)
    {
        rooms[0] = r;
        room_counter++;
    }
    void print_students()
    {
        for(int i=0;i<student_counter;i++)
        {
            students[i].print();
            cout<<endl;
        }
    }
    void print_teacher()
    {
        for(int i=0;i<teacher_counter;i++)
        {
            teachers[i].print();
            cout<<endl;
        }
    }
    void print_staff()
    {
        for(int i=0;i<staff_counter;i++)
        {
            staffs[i].print();
            cout<<endl;
        }
    }
    void print_course()
    {
        for(int i=0;i<course_counter;i++)
        {
            courses[i].print();
            cout<<endl;
        }
    }
    void print_room()
    {
        for(int i=0;i<room_counter;i++)
        {
            rooms[i].print();
            cout<<endl;
        }
    }
};