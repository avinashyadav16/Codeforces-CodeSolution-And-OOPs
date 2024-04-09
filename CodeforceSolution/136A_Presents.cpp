/**
 *  @file: 136A_Presents.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/136/A
 *  @date: 09-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<int> res(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p;
        res[p] = i;
    }
    cout << res[1];
    for (int i = 2; i <= n; ++i)
    {
        cout << " " << res[i];
    }
    cout << endl;

    return 0;
}