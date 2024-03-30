/**
 *  @file: Lecture_34.cpp
 *  @author: Avinash Yadav
 *  @brief: Polymorphism in C++
 *  @date: 13-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
NOTES:
    POLYMORPHISM:
        One name and many forms.
        e.g. Function overloading, Operator Overloading, Virtual Function

        1. Compile Time Polymorphism / Early Binding / Static Binding - Object gets bound with the function call during the compile time.
                Achieved via Function overloading and Operator Overloading

        2. Run Time Polymorphism / Late binding / dynamic polymorphism -
                Achieved via Virtual FUntion
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declaring a Base class
class Base
{

public:
    // virtual function
    virtual void display()
    {
        cout << "Called virtual Base Class function"
             << "\n\n";
    }

    void print()
    {
        cout << "Called Base print function"
             << "\n\n";
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declaring a Child Class
class Child : public Base
{

public:
    void display()
    {
        cout << "Called Child Display Function"
             << "\n\n";
    }

    void print()
    {
        cout << "Called Child print Function"
             << "\n\n";
    }
};

int main()
{
    // Create a reference of class Base
    Base *base;

    Child child;

    base = &child;

    // This will call the virtual function
    base->Base::display();

    // this will call the non-virtual function
    base->print();
}