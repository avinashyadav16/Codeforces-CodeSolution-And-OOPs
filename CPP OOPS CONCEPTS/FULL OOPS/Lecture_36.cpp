/**
 *  @file: Lecture_36.cpp
 *  @author: Avinash Yadav
 *  @brief: Virtual Functions in C++
 *  @date: 21-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class BASE_CLASS
{
public:
    int base_value = 100;

    // Now this defines that
    // if the derived class runs a funtion with the same name then run the derived class funtion and not the base class funtion:
    virtual void display()
    {
        cout << "1. Displaying BASE_CLASS base_value: " << base_value << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class DERIVED_CLASS : public BASE_CLASS
{
public:
    int derived_value = 200;
    void display()
    {
        cout << "\n2.1 Displaying BASE_CLASS base_value: " << base_value << endl;
        cout << "2.2 Displaying DERIVED_CLASS derived_value: " << derived_value << endl;
    }
};

int main()
{
    BASE_CLASS *base_class_pointer;
    BASE_CLASS base_class_object;

    DERIVED_CLASS derived_class_object;

    base_class_pointer = &derived_class_object;
    base_class_pointer->display();
}
