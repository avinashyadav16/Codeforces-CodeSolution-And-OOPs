/**
 *  @file: 1915A_OddOneOut.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1915/A
 *  @date: 06-05-2024
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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a == b)
        {
            cout << c << endl;
        }
        else if (b == c)
        {
            cout << a << endl;
        }
        else if (a == c)
        {
            cout << b << endl;
        }
    }

    return 0;
}