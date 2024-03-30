/**
 *  @file: 1A_TheatreSquare.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1/A
 *  @date: 30-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;

    long long flagstones_n = (n + a - 1) / a;
    long long flagstones_m = (m + a - 1) / a;

    long long total_flagstones = flagstones_n * flagstones_m;

    cout << total_flagstones << endl;

    return 0;
}