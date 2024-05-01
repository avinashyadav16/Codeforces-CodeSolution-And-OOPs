/**
 *  @file: 1343B_BalancedArray.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1343/B
 *  @date: 30-04-2024
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

        if (n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            ll sum1 = 0, sum2 = 0;
            for (ll i = 1; i <= n / 2; i++)
            {
                cout << i * 2 << " ";
                sum1 += i * 2;
            }
            for (ll i = 1; i <= (n / 2) - 1; i++)
            {
                cout << i * 2 - 1 << " ";
                sum2 += i * 2 - 1;
            }
            cout << sum1 - sum2;
            cout << endl;
        }
    }

    return 0;
}
