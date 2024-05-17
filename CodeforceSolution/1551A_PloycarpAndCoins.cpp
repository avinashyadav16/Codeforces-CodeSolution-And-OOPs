/**
 *  @file: 1551A_PloycarpAndCoins.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1551/A
 *  @date: 13-05-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    for (int z = 1; z <= t; z++)
    {
        int n;
        cin >> n;

        int one = n / 3;
        int two = n / 3;

        if (n % 3 == 1)
        {
            one++;
        }
        else if (n % 3 == 2)
        {
            two++;
        }

        cout << one << " " << two << endl;
    }

    return 0;
}