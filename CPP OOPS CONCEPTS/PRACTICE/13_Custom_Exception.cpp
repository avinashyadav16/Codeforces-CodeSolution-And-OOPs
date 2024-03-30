/**
 *  @file: 13_Custom_Exception.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP Code for Custom Exceptions With Multiple classes:
 *  @date: 04-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Test1
{
};

class Test2
{
};

int main()
{
    try
    {
        // Nameless Object: Test1()
        throw Test1();
    }
    catch (Test1 t1)
    {
        cout << "Exception Test1" << endl;
    }
    try
    {
        // Nameless Object: Test2()
        throw Test2();
    }
    catch (Test2 t2)
    {
        cout << "Exception Test2" << endl;
    }

    return 0;
}