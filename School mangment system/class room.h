#pragma once
#include "person.h"

class room
{
    private:
    int room_number;
    int capacity;
    public:
    room()
    {
    }
    room(int room_number,int capacity)
    {
        this->room_number=room_number;
        this->capacity=capacity;
    }
    void set_room_number(int room_number)
    {
        this->room_number=room_number;
    }
    void set_capacity(int capacity)
    {
        this->capacity=capacity;
    }
    int get_room_number()
    {
        return room_number;
    }
    int get_capacity()
    {
        return capacity;
    }
    void print()
    {
        cout<<"Room number is:"<<room_number<<endl;
        cout<<"capacity is:"<<capacity<<endl;
    }
    void information()
    {
        cout<<"Room number is:"<<endl;
        cin>>room_number;
        cout<<"Capacity is:"<<endl;
        cin>>capacity;
    }

};