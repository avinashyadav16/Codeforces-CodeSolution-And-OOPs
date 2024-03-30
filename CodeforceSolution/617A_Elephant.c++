/**
 *  @file: 617A_Elephant.c++
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/617/A
 *  @date: 28-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, move = 0;
    cin >> x;
    if (x % 5 == 0)
    {
        cout << x / 5 << endl;
    }
    else
    {
        cout << (x / 5) + 1 << endl;
    }
    return 0;
}