/**
 *  @file: 1742A_SUM.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1742/A
 *  @date: 27-03-2024
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;

        if (a == (b + c) || b == (a + c) || c == (a + b))
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