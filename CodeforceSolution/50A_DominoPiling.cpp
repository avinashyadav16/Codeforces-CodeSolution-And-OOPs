/**
 *  @file: 50A_DominoPiling.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/50/A
 *  @date: 31-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int m, n;
    cin >> m >> n;

    long long int totalDominos = m * n;

    cout << static_cast<int>(totalDominos / 2) << endl;

    return 0;
}