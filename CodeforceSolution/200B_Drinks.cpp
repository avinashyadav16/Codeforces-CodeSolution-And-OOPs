/**
 *  @file: 200B_Drinks.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/200/B
 *  @date: 03-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, temp;
    cin >> n;

    double total;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        total += temp;
    }
    cout << fixed << setprecision(12) << (total / n) << endl;

    return 0;
}