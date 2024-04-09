/**
 *  @file: 705A_Hulk.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/705/A
 *  @date: 09-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<string> vec = {"I hate", "I love"};

    for (long long int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            cout << vec[0] << " ";
        else
            cout << vec[1] << " ";

        if (i != n - 1)
            cout << "that ";

        if (i == n - 1)
            cout << "it";
    }

    return 0;
}