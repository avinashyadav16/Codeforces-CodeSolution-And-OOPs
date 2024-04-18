/**
 *  @file: 1154A_RestoringThreeNumbers.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1154/A
 *  @date: 17-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec(4);
    for (long long int i = 0; i < 4; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    for (long long int i = 0; i < 3; i++)
    {
        cout << vec[3] - vec[i] << " ";
    }
    cout << endl;

    return 0;
}