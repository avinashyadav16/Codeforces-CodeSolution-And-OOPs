/**
 *  @file: Lecture_11.cpp
 *  @author: Avinash Yadav
 *  @brief: Constructor Overloading In C++
 *  @date: 08-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    // Constructor without any parameter:
    Complex()
    {
        a = 0;
        b = 0;
    }

    // Constructor with parameter:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    // Constructor with one parameter:
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(14, 60);
    c1.printNumber();

    Complex c2(50);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
