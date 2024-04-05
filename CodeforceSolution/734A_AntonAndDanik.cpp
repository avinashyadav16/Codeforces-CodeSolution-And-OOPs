/**
 *  @file: 734A_AntonAndDanik.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/734/A
 *  @date: 06-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, a, d;
    cin >> n;

    string str;
    cin >> str;

    a = count(str.begin(), str.end(), 'A');
    d = count(str.begin(), str.end(), 'D');

    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (d > a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}