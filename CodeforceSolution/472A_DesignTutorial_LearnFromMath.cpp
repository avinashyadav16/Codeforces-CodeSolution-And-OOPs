/**
 *  @file: 472A_DesignTutorial_LearnFromMath.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/472/A
 *  @date: 22-04-2024
 *  @tag: math, number theory
 */

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    for (long long int i = 2; i < num; i = i + 1)
    {
        if (num % i == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    long int number, num1, num2;
    cin >> number;

    num1 = 4;
    num2 = number - 4;

    for (long long int i = 1; i <= number; i++)
    {
        bool num1Prime = isPrime(num1);
        bool num2Prime = isPrime(num2);
        if (num1Prime && num2Prime)
        {
            cout << num1 << " " << num2 << endl;
            return 0;
        }
        num1++;
        num2--;
    }
}
