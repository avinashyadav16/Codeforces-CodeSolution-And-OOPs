/**
 *  @file: Lecture_09.cpp
 *  @author: Avinash Yadav
 *  @brief: Constructors In C++
 *  @date: 08-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Numbers
{
private:
    int num1, num2;

public:
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Constructor:
    //      Constructor is a special member function with the same name as of the class.
    //      It is used to initialize the objects of its class
    //      It is declared in the public section of the class.
    //      It is automatically invoked whenever an object is created.
    //      They don't have return type.
    //      We can't define more than one deafult constructors.
    //      We can't refer to their addresses.

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Default Constructor
    Numbers()
    {
        num1 = 0;
        num2 = 0;
    }

    Numbers(int a)
    {
        num1 = 0;
        num2 = a;
    }

    Numbers(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void print()
    {
        cout << num1 << " and " << num2 << endl;
    }
};

int main()
{
    Numbers obj1;
    obj1.print();

    Numbers obj2(10);
    obj2.print();

    Numbers obj3(20, 30);
    obj3.print();

    return 0;
}