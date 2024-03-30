/**
 *  @file: Lecture_05.cpp
 *  @author: Avinash Yadav
 *  @brief: Array of Objects in CPP
 *  @date: 06-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int ID;
    int salary;

public:
    void setID(void)
    {
        cout << "Enter Employee ID: ";
        cin >> ID;
    }

    void getID(void)
    {
        cout << "ID of Employee is: " << ID << endl;
        cout << endl;
    }
};

int main()
{
    // Employee avinash, satyam, sattu;
    // avinash.setID();
    // avinash.getID();

    // satyam.setID();
    // satyam.getID();

    // sattu.setID();
    // sattu.getID();

    Employee employees[3];
    for (int i = 0; i < 3; i++)
    {
        employees[i].setID();
        employees[i].getID();
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 *  @file: Lecture_05.cpp
 *  @author: Avinash Yadav
 *  @brief: Passing Objects as Function Arguments in C++
 *  @date: 07-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void setData(int r, int im)
    {
        real = r;
        imag = im;
    }

    void addComplex(Complex com1, Complex com2)
    {
        real = com1.real + com2.real;
        imag = com1.imag + com2.imag;
    }

    void display(void)
    {
        if (imag < 0)
        {
            cout << "Complex Number is: " << real << " - i" << fabs(imag) << endl;
        }
        else
        {
            cout << "Complex Number is: " << real << " + i" << imag << endl;
        }
    }
};

int main()
{
    Complex com1, com2, com3;
    com1.setData(10, 20);
    com1.display();

    com2.setData(20, 10);
    com2.display();

    com3.addComplex(com1, com2);
    com3.display();

    return 0;
}