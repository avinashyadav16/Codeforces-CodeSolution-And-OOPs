/**
 *  @file: 151A_SoftDrinking.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/151/A
 *  @date: 17-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drinks = (k * l) / nl;
    int total_limes = c * d;
    int total_salt = p / np;
    
    int total_drinks_with_salt = min(total_drinks, total_salt);
    int total_limes_with_salt = min(total_limes, total_salt);
    int total_drinks_with_salt_and_limes = min(total_drinks_with_salt, total_limes_with_salt);

    cout << total_drinks_with_salt_and_limes / n << endl;

    return 0;
}