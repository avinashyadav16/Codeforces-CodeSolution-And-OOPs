/**
 *  @file: 110A_NearlyLuckyNumber.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/110/A
 *  @date: 02-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int luckyDigitsCount = 0;
    while (n != 0)
    {
        if ((n % 10) == 4 || (n % 10) == 7)
        {
            luckyDigitsCount++;
        }
        n /= 10;
    }

    if (luckyDigitsCount == 4 || luckyDigitsCount == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}