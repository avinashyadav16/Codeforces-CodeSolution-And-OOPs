/**
 *  @file: 144A_ArrivalOfTheGeneral.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/144/A
 *  @date: 10-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int total, maxHeight = INT_MIN, minvalue = INT_MAX, maxIndex = 0, minIndex = 0;
    cin >> total;

    for (long long int i = 0; i < total; i++)
    {
        int height;
        cin >> height;

        if (height > maxHeight)
        {
            maxIndex = i;
            maxHeight = height;
        }
        if (height <= minvalue)
        {
            minIndex = i;
            minvalue = height;
        }
    }

    if (maxIndex > minIndex)
    {
        cout << (maxIndex - 1) + (total - minIndex) - 1 << endl;
    }
    else
    {
        cout << (maxIndex - 1) + (total - minIndex) << endl;
    }

    return 0;
}