/**
 *  @file: Lecture_29.cpp
 *  @author: Avinash Yadav
 *  @brief: Initialization list in Constructors in Cpp
 *  @date: 13-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
NOTES:

{{constructor-name}} ( {{argument-list}} ) : {{initilization-section}}
{
    //assignments
    // other codes, etc.
}

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Testing
{
private:
    int a;
    int b;

public:
    Testing(int i, int j) : a(i), b(j)           // a = 10; b = 1000
    // Testing(int i, int j) : b(i), a(j)        // a = 1000; b = 10
    // Testing(int i, int j) : a(i), b(i + j)    // a = 10; b = 1010
    // Testing(int i, int j) : a(i), b(a + j)    // a = 10; b = 1010
    // Testing(int i, int j) : b(j), a(i + b)    // a = 10; b = 1000 since a is declared first therefore it will get the value first(The order of initialization in the member initializer list is determined by the order of declaration in the class, not the order in which they appear in the initializer list.)
    {
        cout << "Constructor Called." << endl
             << "Value of a: " << a << endl
             << "Value of b: " << b << endl;
    }
};

int main()
{
    Testing test(10, 1000);

    return 0;
}