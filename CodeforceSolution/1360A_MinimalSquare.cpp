/**
 *  @file: 1360A_MinimalSquare.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1360/A
 *  @date: 14-05-2024
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
        ll a, b;
        cin >> a >> b;
        cout << pow(max(min(a, b) * 2, max(a, b)), 2) << endl;
    }

    return 0;
}