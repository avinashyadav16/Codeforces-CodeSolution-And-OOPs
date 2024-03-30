/**
 *  @file: 282A_Bits++.c++
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/282/A
 *  @date: 28-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        string str;
        cin >> str;
        if (str == "X++" || str == "++X")
        {
            count++;
        }
        else if (str == "--X" || str == "X--")
        {
            count--;
        }
    }
    cout << count;
}