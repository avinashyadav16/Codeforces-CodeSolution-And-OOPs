/**
 *  @file: 231A_Team.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/231/A
 *  @date: 28-03-2024
 */

#include <iostream>
using namespace std;

int main()
{
    int n, count1 = 0, count2 = 0;
    cin >> n;
    int i, j;
    int arr[n][3];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            count2 += arr[i][j];
        }
        if (count2 >= 2)
        {
            count1++;
        }
        count2 = 0;
    }
    cout << count1;
}