/**
 *  @file: 630A_AgainTwentyFive.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/630/A
 *  @date: 22-04-2024
 *  @tag: number theory
 */

#include <bits/stdc++.h>
using namespace std;

// Lenthy Approach to the given problem:
long long int powerOfFive(long long int n)
{
    long long int halfPower, result, finalResult;
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 5;
    }

    halfPower = powerOfFive(n / 2);
    result = halfPower * halfPower;

    if (n % 2 == 1)
    {
        result *= 5;
    }

    return result % 100;
}

int main()
{
    long long int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
    }
    else if (n == 1)
    {
        cout << 5 << endl;
    }
    else
    {
        cout << 25 << endl;
    }

    // Lenthy Approach to the given problem:
    // cout << powerOfFive(n) << endl;

    return 0;
}
