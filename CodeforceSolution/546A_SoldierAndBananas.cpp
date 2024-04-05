/**
 *  @file: 546A_SoldierAndBananas.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/546/A
 *  @date: 06-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, n, w, req = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        req += i * k;
    }

    cout << (((req - n) >= 0) ? (req - n) : 0) << endl;

    return 0;
}