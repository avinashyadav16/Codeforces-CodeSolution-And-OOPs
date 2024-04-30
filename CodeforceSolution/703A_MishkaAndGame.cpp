/**
 *  @file: 703A_MishkaAndGame.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/703/A
 *  @date: 30-04-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, mCount = 0, cCount = 0;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll m, c;
        cin >> m >> c;

        if (m > c)
        {
            mCount++;
        }
        else if (c > m)
        {
            cCount++;
        }
    }
    if (mCount > cCount)
    {
        cout << "Mishka";
    }
    else if (cCount > mCount)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }

    return 0;
}