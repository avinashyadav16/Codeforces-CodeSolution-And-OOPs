/**
 *  @file: 1692A_Marathon.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1692/A
 *  @date: 26-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;

        if (b > a)
            count++;
        if (c > a)
            count++;
        if (d > a)
            count++;

        cout << count << endl;
    }

    return 0;
}