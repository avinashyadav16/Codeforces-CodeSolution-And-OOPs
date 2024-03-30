/**
 *  @file: 02_Con_And_Des_.cpp
 *  @author: Avinash Yadav
 *  @brief: Constructor and Destructor in Parent and child class
 *  @date: 19-10-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent Constructor Called." << endl;
    }
    ~Parent()
    {
        cout << "Parent Destructor Called." << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child Constructor Called." << endl;
    }
    ~Child()
    {
        cout << "Child Destructor Called." << endl;
    }
};

int main()
{
    Child obj;
    return 0;
}