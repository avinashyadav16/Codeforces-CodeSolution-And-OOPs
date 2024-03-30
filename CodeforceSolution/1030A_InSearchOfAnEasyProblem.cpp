/**
 *  @file: 1030A_InSearchOfAnEasyProblem.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1030/A
 *  @date: 28-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<long long> res(n);

    for (int i = 0; i < n; i++)
    {
        cin >> res[i];
    }

    vector<long long>::iterator it = find(res.begin(), res.end(), 1);

    if (it != res.end())
    {
        cout << "Hard" << endl;
    }
    else
    {
        cout << "Easy" << endl;
    }

    return 0;
}