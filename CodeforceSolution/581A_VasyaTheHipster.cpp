/**
 *  @file: 581A_VasyaTheHipster.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/581/A
 *  @date: 17-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    cout << min(a, b) << " " << (abs(a - b)) / 2 << endl;

    return 0;
}