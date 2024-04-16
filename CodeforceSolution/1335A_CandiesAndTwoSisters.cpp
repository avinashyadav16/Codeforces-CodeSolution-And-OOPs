/**
 *  @file: 1335A_CandiesAndTwoSisters.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1335/A
 *  @date: 14-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n, count = 0;
        cin >> n;

        long long int ans = ((n - 1) - ((n / 2) + 1)) + 1;

        cout << ((ans > 0) ? ans : 0) << endl;
    }

    return 0;
}