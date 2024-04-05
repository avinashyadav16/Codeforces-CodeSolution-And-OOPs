/**
 *  @file: 1328A_DivisibiltyProblem.c++
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1328/A
 *  @date: 28-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long int a, b, move = 0;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            move = a % b;
            cout << b - move << endl;
        }
    }
    return 0;
}
