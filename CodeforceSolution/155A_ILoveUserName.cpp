/**
 *  @file: 155A_ILoveUserName.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/155/A
 *  @date: 17-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, count = 0;
    cin >> n;

    vector<int> contents(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> contents[i];
    }

    int minPoint = contents[0];
    int maxPoint = contents[0];

    for (long long int i = 1; i < n; i++)
    {
        if (contents[i] < minPoint)
        {
            minPoint = contents[i];
            count++;
        }
        if (contents[i] > maxPoint)
        {
            maxPoint = contents[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}