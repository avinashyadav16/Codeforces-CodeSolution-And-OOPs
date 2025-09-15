/**
 *  @file: 11_Simple_Exception.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP code for Simple Exception
 *  @date: 02-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numerator, denominator, divide;
    cout << "Enter the Numerator: ";
    cin >> numerator;

    cout << "Enter the Denominator: ";
    cin >> denominator;

    try
    {
        if (denominator == 0)
        {
            throw 0;
        }
        divide = numerator / denominator;
        cout << numerator << "/" << denominator << " = " << divide << endl;
    }
    catch (int exp_err)
    {
        cout << "ERROR: Can't divide by " << exp_err;
    }

    return 0;
}