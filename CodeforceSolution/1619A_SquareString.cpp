/**
 *  @file: 1619A_SquareString.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1619/A
 *  @date: 11-05-2024
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
        string str;
        cin >> str;

        if (str.size() % 2)
        {
            cout << "NO" << endl;
            continue;
        }

        ll size = str.size() / 2;
        bool sq = true;

        for (ll i = 0; i < size; i++)
        {
            if (str[i] != str[size + i])
            {
                sq = false;
                break;
            }
        }
        cout << (sq ? "YES" : "NO") << endl;
    }

    return 0;
}