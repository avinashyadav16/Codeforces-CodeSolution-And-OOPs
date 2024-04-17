/**
 *  @file: 750A_NewYearAndHurry.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/750/A
 *  @date: 17-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int totalTime = 4 * 60;
    int problemSolved = 0;
    int timeLeft = totalTime - k;
    for (int i = 1; i <= n; i++)
    {
        if ((5 * i) <= timeLeft)
        {
            timeLeft -= 5 * i;
            problemSolved++;
        }
        else
        {
            break;
        }
    }

    cout << problemSolved << endl;

    return 0;
}