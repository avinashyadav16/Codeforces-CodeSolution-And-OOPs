/**
 *  @file: 4A_Watermelon.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/4/A
 *  @date: 28-03-2024
 */

#include <iostream>
using namespace std;

int main()
{
    int w, i;
    cin >> w;
    if (w == 2)
    {
        cout << "No";
    }
    else if (w % 2 != 0)
    {
        cout << "No";
    }
    else
    {
        int even_weight = w / 2;
        cout << "Yes";
    }
    return 0;
}