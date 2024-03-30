/**
 *  @file: Lecture_35.cpp
 *  @author: Avinash Yadav
 *  @brief: Pointers to Derived Classes in C++
 *  @date: 20-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                      RUN TIME POLYMORPHISM
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class BASE_CLASS
{
public:
    int base_value;
    void display()
    {
        cout << "Displaying BASE_CLASS base_value: " << base_value << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class DERIVED_CLASS : public BASE_CLASS
{
public:
    int derived_value;
    void display()
    {
        cout << "\nDisplaying BASE_CLASS base_value: " << base_value << endl;
        cout << "Displaying DERIVED_CLASS derived_value: " << derived_value << endl;
    }
};

int main()
{
    BASE_CLASS *base_class_pointer;
    BASE_CLASS base_class_object;

    DERIVED_CLASS derived_class_object;

    base_class_pointer = &derived_class_object;
    // Here we can call the derived class object by using the base class pointer
    // But if we call the display function then it will not call the derived class display function
    // rather it will call the base class display function
    // this is what called the late binding

    base_class_pointer->base_value = 34;
    base_class_pointer->display();

    DERIVED_CLASS *derived_class_pointer;
    derived_class_pointer = &derived_class_object;

    derived_class_pointer->derived_value = 134;
    derived_class_pointer->display();

    return 0;
}