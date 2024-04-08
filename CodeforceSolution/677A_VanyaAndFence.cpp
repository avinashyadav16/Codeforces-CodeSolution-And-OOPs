/**
 *  @file: 677A_VanyaAndFence.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/677/A
 *  @date: 08-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, h, result = 0;
    cin >> n >> h;

    vector<int> res(n);

    for (long long int i = 0; i < n; i++)
    {
        cin >> res[i];
        if (res[i] > h)
            result += 2;
        else
            result++;
    }

    cout << result << endl;

    return 0;
}