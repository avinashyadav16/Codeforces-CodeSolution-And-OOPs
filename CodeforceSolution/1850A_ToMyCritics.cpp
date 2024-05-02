/**
 *  @file: 1850A_ToMyCritics.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1850/A
 *  @date: 02-05-2024
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

        if ((a + b) >= 10)
        {
            cout << "YES" << endl;
        }
        else if ((c + b) >= 10)
        {
            cout << "YES" << endl;
        }
        else if ((a + c) >= 10)
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