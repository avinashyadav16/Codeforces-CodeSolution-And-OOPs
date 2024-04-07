/**
 *  @file: 41A_Translation.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/41/A
 *  @date: 07-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, rev = "";
    cin >> str1 >> str2;

    int len = str1.length();

    for (int i = len - 1; i >= 0; i--)
    {
        rev += str1[i];
    }

    cout << ((str2 == rev) ? "YES" : "NO") << endl;

    return 0;
}