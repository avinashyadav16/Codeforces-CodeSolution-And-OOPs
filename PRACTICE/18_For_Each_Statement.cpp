/**
 *  @file: 18_For_Each_Statement.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP Code for "For Each Statement"
 *  @date: 14-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    cout << "Traversing the array with For Each Loop " << endl
         << "\nby using array's data type: " << endl;

    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << "\n\nby using auto data type: " << endl;
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}