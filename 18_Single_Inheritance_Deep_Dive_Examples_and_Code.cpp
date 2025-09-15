/**
 *  @file: Lecture_18.cpp
 *  @author: Avinash Yadav
 *  @brief: Single Inheritance Deep Dive: Examples + Code
 *  @date: 11-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Base
{
private:
    int data1;

public:
    int data2;
    void setter();
    int getter1();
    int getter2();
};

void Base ::setter()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getter1()
{
    return data1;
}
int Base ::getter2()
{
    return data2;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class Derived : private Base         // WHEN INHERITEND PRIVATELY
class Derived : public Base
{
private:
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    // setter();        // WHEN INHERITEND PRIVATELY
    data3 = getter1() * getter2();
}

void Derived ::display()
{
    cout << "Data1 is: " << getter1() << endl;
    cout << "Data2 is: " << data2 << endl;
    cout << "Data3 is: " << data3 << endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    Derived obj1;
    obj1.setter();
    // obj1.setter();        // WHEN INHERITEND PRIVATELY
    obj1.process();
    obj1.display();

    return 0;
}
