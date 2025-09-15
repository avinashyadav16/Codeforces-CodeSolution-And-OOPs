/**
 *  @file: Lecture_28.cpp
 *  @author: Avinash Yadav
 *  @brief: Code Example: Constructors in Derived Class in Cpp
 *  @date: 12-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
NOTES:

Case1:
class B: public A
{
            // Order of execution of constructor
                        -> first A() then B()
};

Case2:
class A: public B, public C
{
            // Order of execution of constructor
                        -> B() then C() and A()
};

Case3:
class A: public B, virtual public C
{
            // Order of execution of constructor
                        -> C() then B() and A()
};

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Base1
{
private:
    int data1;

public:
    Base1(int i)
    {
        cout << "Base1 Class Constructor Called." << endl;
        data1 = i;
    }

    void print_base1(void)
    {
        cout << "Data1 of class Base1: " << data1 << endl;
    }

    ~Base1()
    {
        cout << "Base1 Class Destructor Called." << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Base2
{
private:
    int data2;

public:
    Base2(int j)
    {
        cout << "Base2 Class Constructor Called." << endl;
        data2 = j;
    }
    void print_base2(void)
    {
        cout << "Data2 of class Base2: " << data2 << endl;
    }

    ~Base2()
    {
        cout << "Base2 Class Destructor Called." << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//class Derived : public Base2, public Base1
class Derived : public Base1, public Base2
{
private:
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        cout << "Derived Class Constructor Called." << endl;
        derived1 = c;
        derived2 = d;
    }
    void print_derived(void)
    {
        cout << "Derived1 and Derived2 of class Derived: " << derived1 << " " << derived2 << endl;
    }

    ~Derived()
    {
        cout << "Derived Class Destructor Called." << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout << endl;
    // We can declare object in both ways:
    // Derived der(10, 20, 30, 40);
    Derived der = Derived(10, 20, 30, 40);
    cout << endl;
    der.print_base1();
    der.print_base2();
    der.print_derived();
    cout << endl;
    return 0;
}