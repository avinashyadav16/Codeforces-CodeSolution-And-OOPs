/**
 *  @file: 791A_BearAndBigBrother.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/791/A
 *  @date: 28-03-2024
 */

#include <iostream>
using namespace std;

int main()
{
    int limak, bob, count = 0;
    cin >> limak >> bob;

    while ((limak <= bob))
    {
        limak = limak * 3;
        bob = bob * 2;
        count += 1;
    }
    cout << count;
    return 0;
}
