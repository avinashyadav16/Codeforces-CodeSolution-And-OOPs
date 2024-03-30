/**
 *  @file: 427A_PoliceRecruits.c++
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/427/A
 *  @date: 28-03-2024
 */

#include <iostream>
using namespace std;

int main()
{
    int t, i, j, count = 0, num_police = 0;
    cin >> t;
    int arr[t];
    for (i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (j = 0; j < t; j++)
    {
        if (arr[j] == -1)
        {
            if (num_police > 0)
            {
                num_police--;
            }
            else
            {
                count++;
            }
        }
        else
        {
            num_police = num_police + arr[j];
        }
    }
    cout << count;
    return 0;
}
