/**
 *  @file: Lecture_31.cpp
 *  @author: Avinash Yadav
 *  @brief: Pointers to Objects and Arrow Operator in CPP
 *  @date: 13-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void getData(void)
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
{
    // METHOD: 01
    Complex c1;
    c1.setData(1, 100);
    c1.getData();

    cout << endl;

    // METHOD: 02
    Complex *ptr1 = &c1;
    (*ptr1).setData(2, 200);
    (*ptr1).getData();

    cout << endl;

    // METHOD: 03
    Complex *ptr2 = new Complex;
    (*ptr2).setData(3, 300);
    (*ptr2).getData();

    cout << endl;

    // METHOD: 04
    Complex *ptr3 = new Complex;
    ptr3->setData(4, 400);
    ptr3->getData();

    return 0;
}