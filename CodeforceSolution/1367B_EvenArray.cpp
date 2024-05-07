/**
 *  @file: 1367B_EvenArray.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1367/B
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
        ll n;
        cin >> n;

        vector<ll> a(n);
        ll evenOdd = 0, oddEven = 0;

        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (i % 2 == 0 && a[i] % 2 == 1)
            {
                ++evenOdd;
            }
            else if (i % 2 == 1 && a[i] % 2 == 0)
            {
                ++oddEven;
            }
        }

        if (evenOdd == oddEven)
        {
            cout << evenOdd << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}