/**
 *  @file: 1374A_RequiredRemainder.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1374/A
 *  @date: 03-05-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, n, result = 0;
        cin >> x >> y >> n;

        result = n - n % x + y;

        if (result <= n)
        {
            cout << result << endl;
        }
        else
        {
            cout << (n - n % x - (x - y)) << endl;
        }
    }

    return 0;
}