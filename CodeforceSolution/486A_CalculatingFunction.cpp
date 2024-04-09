/**
 *  @file: 486A_CalculatingFunction.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/486/A
 *  @date: 09-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, ans;
    cin >> n;

    if (n % 2 == 0)
        ans = n / 2;
    else
        ans = ((n + 1) / 2) * (-1);
        
    cout << ans << endl;

    return 0;
}
