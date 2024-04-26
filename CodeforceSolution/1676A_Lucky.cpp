/**
 *  @file: 1676A_Lucky.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1676/A
 *  @date: 26-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string ticket;
        cin >> ticket;

        int first_3 = 0;
        int last_3 = 0;

        for (int i = 0; i < 3; ++i)
        {
            first_3 += (ticket[i] - '0');
        }

        for (int i = 3; i < 6; ++i)
        {
            last_3 += (ticket[i] - '0');
        }

        if (first_3 == last_3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}