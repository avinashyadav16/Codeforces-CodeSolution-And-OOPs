/**
 *  @file: 148A_InsomniaCure.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/148/A
 *  @date: 10-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    long long int damaged = d;

    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << damaged << endl;
    }
    else
    {
        for (long long int i = 1; i <= d; i++)
        {
            if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0))
            {
                damaged--;
            }
        }
        cout << damaged << endl;
    }

    return 0;
}