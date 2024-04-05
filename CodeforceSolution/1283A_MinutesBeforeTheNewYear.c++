/**
 *  @file: 1283A_MinutesBeforeTheNewYear.c++
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1283/A
 *  @date: 28-03-2024
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
        long long int h, m;
        cin >> h >> m;

        cout << ((60 - m) + ((23 - h) * 60)) << endl;
    }

    return 0;
}