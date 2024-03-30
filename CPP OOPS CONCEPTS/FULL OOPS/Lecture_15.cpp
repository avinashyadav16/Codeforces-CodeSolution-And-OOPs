/**
 *  @file: Lecture_15.cpp
 *  @author: Avinash Yadav
 *  @brief: Destructor in C++
 *  @date: 10-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Destructors
{
private:
    static int count;

public:
    Destructors()
    {
        count++;
        cout << "Constructor Called: " << count << endl;
    }
    ~Destructors()
    {
        cout << "Destructor Called: " << count << endl;
        count--;
    }
};

int Destructors ::count;

int main()
{
    Destructors num1;
    {
        cout << endl
             << "Entering inside the Block" << endl;
        cout << "Creating 2 more objects" << endl;
        Destructors num2, num3;
        cout << "Existing the Block" << endl;
    }
    cout << endl
         << "Existed the Block" << endl;

    return 0;
}