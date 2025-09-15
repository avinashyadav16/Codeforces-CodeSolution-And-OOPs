/**
 *  @file: Lecture_47.cpp
 *  @author: Avinash Yadav
 *  @brief: C++ Function Templates & Function Templates with Parameters
 *  @date: 25-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

template <class T1, class T2>
void swapNum(T1 num1, T2 num2)
{
    cout << "Before Swap: " << num1 << " " << num2 << endl;

    T1 temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After Swap: " << num1 << " " << num2 << endl;
    cout << endl;
}

template <class T1, class T2>
void Average(T1 num1, T2 num2)
{
    cout << "Average of " << num1 << " and " << num2 << " is: " << (num1 + num2) / 2 << endl;
}

int main()
{
    swapNum<int, int>(5, 25);
    swapNum<float, float>(59.95, 25.52);

    Average<int, int>(5, 25);
    Average<float, float>(55.50, 25.54);

    return 0;
}