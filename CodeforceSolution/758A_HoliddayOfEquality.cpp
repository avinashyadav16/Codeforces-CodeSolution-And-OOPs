/**
 *  @file: 758A_HoliddayOfEquality.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/758/A
 *  @date: 22-04-2024
 *  @tag: implementation, math
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<long> vec(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    long long int sum = 0;
    long long int maxCoin = *max_element(vec.begin(), vec.end());
    for (long long int i = 0; i < n; i++)
    {
        sum += (maxCoin - vec[i]);
    }

    cout << sum << endl;
    return 0;
}