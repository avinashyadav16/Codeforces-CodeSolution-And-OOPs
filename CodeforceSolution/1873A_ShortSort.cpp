/**
 *  @file: 1873A_ShortSort.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1873/A
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
        string cards;
        cin >> cards;

        if (cards[0] == 'a' || cards[1] == 'b' || cards[2] == 'c')
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