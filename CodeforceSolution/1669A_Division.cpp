/**
 *  @file: 1669A_Division.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1669/A
 *  @date: 27-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int a;
        cin >> a;

        if (a >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (a <= 1899 and a >= 1600)
        {
            cout << "Division 2" << endl;
        }
        else if (a <= 1599 and a >= 1400)
        {
            cout << "Division 3" << endl;
        }
        else
        {
            cout << "Division 4" << endl;
        }
    }

    return 0;
}