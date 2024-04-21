/**
 *  @file: 1957A_Stickogon.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/contest/1957/problem/0
 *  @date: 21-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, stickLen;
        cin >> n;

        unordered_map<int, int> unmap;
        for (long long int i = 0; i < n; i++)
        {
            cin >> stickLen;
            unmap[stickLen]++;
        }

        int count = 0;
        for (auto num : unmap)
        {
            int k = num.second;
            count = count + (k / 3);
        }

        cout << count << endl;
    }

    return 0;
}