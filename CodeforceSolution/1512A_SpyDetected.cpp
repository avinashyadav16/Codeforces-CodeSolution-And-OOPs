/**
 *  @file: 1512A_SpyDetected.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1512/A
 *  @date: 22-04-2024
 *  @tag: brute force, implementation
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        vector<long long int> vec(n);
        unordered_map<long long int, long long int> unmap;

        for (long long int i = 0; i < n; i++)
        {
            cin >> vec[i];
            unmap[vec[i]]++;
        }

        for (long long int i = 0; i < n; i++)
        {
            if (unmap[vec[i]] == 1)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}