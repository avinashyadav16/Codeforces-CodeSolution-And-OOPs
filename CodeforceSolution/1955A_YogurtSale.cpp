/**
 *  @file: 1955A_YogurtSale.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1955/A
 *  @date: 18-04-2024
 *
 *  @copyright Copyright (c) 2024
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b;
        cin >> n >> a >> b;

        long long int usingOne = n * a;
        long long int usingTwo = ((n / 2) * b) + ((n % 2) * a);

        cout << min(usingOne, usingTwo) << endl;
    }
    return 0;
}