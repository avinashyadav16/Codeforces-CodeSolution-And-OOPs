/**
 *  @file: 344A_Magnets.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/344/A
 *  @date: 28-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string prev, curr;
    int groups = 1;
    cin >> prev;
    for (int i = 1; i < n; ++i)
    {
        cin >> curr;
        if (curr != prev)
        {
            groups++;
            prev = curr;
        }
    }

    cout << groups << endl;

    return 0;
}
