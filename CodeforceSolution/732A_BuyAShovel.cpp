/**
 *  @file: 732A_BuyAShovel.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/732/A
 *  @date: 17-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r, count = 1;
    cin >> k >> r;

    while (true)
    {
        if ((k * count) % 10 == 0 || (k * count) % 10 == r)
        {
            cout << count << endl;
            break;
        }
        count++;
    }

    return 0;
}