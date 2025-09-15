/**
 *  @file: 12_Multiple_Exception.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP Code for Multiple Exception.
 *  @date: 04-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double numerator, denominator;
    double arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;
    cout << "Enter index Number: ";
    cin >> index;

    try
    {
        if (index >= 4)
        {
            throw "ERROR: Array index out of bound.";
        }
        cout << "Enter Numerator: ";
        cin >> numerator;
        cout << "Enter Denominator: ";
        cin >> denominator;

        if (denominator == 0)
        {
            throw 0;
        }

        arr[index] = numerator / denominator;
        cout << arr[index] << endl;
    }

    catch (const char *msg)
    {
        cout << msg << endl;
    }

    catch (int num)
    {
        cout << "ERROR: Can't divide by " << num << endl;
    }

    // Will Receive all the other exceptions like- Runtime, Memory out of bound etc.
    catch (...)
    {
        cout << "Unexpected excepted exception" << endl;
    }

    return 0;
}