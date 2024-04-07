/**
 *  @file: 116A_Tram.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/116/A
 *  @date: 07-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int capacity = 0, maxCapacity = 0;
    for (int i = 0; i < n; ++i)
    {
        long long int entering, existing;
        cin >> entering >> existing;

        capacity -= entering;
        capacity += existing;

        maxCapacity = max(maxCapacity, capacity);
    }

    cout << maxCapacity << endl;
}