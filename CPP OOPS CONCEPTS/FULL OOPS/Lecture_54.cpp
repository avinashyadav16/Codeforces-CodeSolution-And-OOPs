/**
 *  @file: Lecture_54.cpp
 *  @author: Avinash Yadav
 *  @brief: Function Objects (Functors) In C++ STL
 *  @date: 25-11-2023
 */
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Objects: Function wrapped in a class so that it available like an object

#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main()
{
    int arr[] = {10, 1, 15, 7, 6, 78, 21};
    for (int i = 0; i < size(arr); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + size(arr));
    for (int i = 0; i < size(arr); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + size(arr), greater<int>());
    for (int i = 0; i < size(arr); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}