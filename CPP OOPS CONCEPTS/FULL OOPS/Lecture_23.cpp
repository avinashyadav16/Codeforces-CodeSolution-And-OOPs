/**
 *  @file: Lecture_23.cpp
 *  @author: Avinash Yadav
 *  @brief: Ambiguity Resolution in Inheritance in C++
 *  @date: 11-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Base1
{
private:
public:
    void greet(void)
    {
        cout << "How are you?" << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Base2
{
private:
public:
    void greet(void)
    {
        cout << "Kaise ho?" << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Derived : public Base1, public Base2
{
private:
public:
    void greet(void)
    {
        cout << endl;
        Base2::greet();
        Base1::greet();
    }
};

int main()
{
    Base1 base1;
    base1.greet();

    Base2 base2;
    base2.greet();

    Derived der;
    der.greet();

    return 0;
}