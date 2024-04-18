/**
 *  @file: 1950A_StairPeakAndNeither.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1950/A
 *  @date: 18-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;

        if ((a < b) && (b < c))
        {
            cout << "STAIR" << endl;
        }
        else if ((a < b) && (b > c))
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }

    return 0;
}