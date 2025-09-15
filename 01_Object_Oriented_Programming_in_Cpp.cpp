/**
 *  @file: Lecture_01.cpp
 *  @author: Avinash Yadav
 *  @brief: Object Oriented Programming in C++
 *  @date: 04-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
Notes:
1. Adding OOPs features to the C language
2. As the size of the program increases then readibility, maintainbility and bug-free nature of the code reduces.
3. Data security was comprimised before.
4. In OOps, the main focus is on the functions and not on the flow of the data
5. Data moves openly form functions to functions.
6. Treats data as a critical elements.
7. Dynamic/Data/Late Binding: Codes which will execute will not be known until the program runs
8. Message Passing: Object.message(Information) call format
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 *  @brief: Classes, Public and Private access modifiers in C++
 *  @date: 04-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    // Function declaration to assign the values to the private member variables
    void setter(int a, int b, int c);
    // void setter(int x, int y, int z)
    // {
    //     a = x;
    //     b = y;
    //     c = z;
    // }
    void getter()
    {
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
        cout << "Value of c is: " << c << endl;
        cout << "Value of d is: " << d << endl;
        cout << "Value of e is: " << e << endl;
    }
};

void Employee ::setter(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
};

int main()
{
    Employee avinashYadav;
    avinashYadav.setter(1, 2, 3);
    avinashYadav.d = 4;
    avinashYadav.e = 5;
    avinashYadav.getter();

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Creating objects along with the class declaration:
class Class
{
public:
    //................//
    //................//
private:
    //................//
    //................//
protected:
    //................//
    //................//
} obj1, obj2, obj3;