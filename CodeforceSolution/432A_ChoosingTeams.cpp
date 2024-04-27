/**
 *  @file: 432A_ChoosingTeams.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/432/A
 *  @date: 27-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    vector<long long> vec(n);

    for (long long int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    long long int chances = 0;

    for (long long int i = 0; i < n; i++)
    {
        if (vec[i] + k <= 5)
        {
            chances++;
        }
    }
    cout << chances / 3 << endl;

    return 0;
}