/**
 *  @file: Lecture_12.cpp
 *  @author: Avinash Yadav
 *  @brief: Constructors With Default Arguments In C++
 *  @date: 08-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Simple
{
private:
    int data1;
    int data2;
    int data3;

public:
    // Constructor with Default Arguments:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "The value of- \ndata1: " << data1 << "\ndata2: " << data2 << "\ndata3: " << data3 << endl;
}

int main()
{
    Simple s(12, 13);
    s.printData();
    return 0;
}
