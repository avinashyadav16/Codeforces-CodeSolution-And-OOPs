/**
 *  @file: 1560A_DislikesOfThree.c++
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1560/A
 *  @date: 28-03-2024
 */

#include <iostream>
using namespace std;

int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int num = 0;
        for (i = 1; i <= n; i++)
        {
            num++;
            while (num % 3 == 0 || num % 10 == 3)
            {
                num++;
            }
        }
        cout << num << endl;
    }
    return 0;
}