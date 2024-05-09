/**
 *  @file: 1370A_MaximumGCD.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1370/A
 *  @date: 09-05-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        // If n is even, the maximum GCD will be n / 2
        // If n is odd, the maximum GCD will be (n - 1) / 2
        cout << n / 2 << endl;
    }

    return 0;
}

// TLE as it is of O(n^2)
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll maxGCD = INT_MIN;

        for (ll i = 1; i <= (n / 2) + 1; i++)
        {
            for (ll j = i + 1; j <= n; j++)
            {
                ll temp = gcd(i, j);
                if (temp > maxGCD)
                {
                    maxGCD = temp;
                }
            }
        }
        cout << maxGCD << endl;
    }

    return 0;
}

*/