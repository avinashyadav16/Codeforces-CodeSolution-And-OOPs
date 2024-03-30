/**
 *  @file: 04_Single_Inheritance.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP code for Single Inheritance
 *  @date: 26-10-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    int number1;
    void getdata()
    {
        cout << "Enter the number: ";
        cin >> number1;
    }
};

class Derived : public Base
{
public:
    void display_number()
    {
        cout << "The Number is: " << number1 << endl;
    }

    void square_number()
    {
        cout << "Square Of Number is: " << pow(number1, 2) << endl;
    }
};

int main()
{
    Derived obj1;
    obj1.getdata();

    cout << endl;
    obj1.display_number();
    obj1.square_number();

    return 0;
}