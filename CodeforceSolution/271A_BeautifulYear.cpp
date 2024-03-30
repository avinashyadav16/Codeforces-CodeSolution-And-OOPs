/**
 *  @file: 271A_BEAUTIFUL_YEAR.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/271/A
 *  @date: 27-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year)
{
    string yearStr = to_string(year);
    unordered_set<char> digits;

    for (char digit : yearStr)
    {
        if (digits.count(digit) > 0)
        {
            return false;
        }
        digits.insert(digit);
    }
    return true;
}

int main()
{
    int year;
    cin >> year;

    while (!hasDistinctDigits(++year))
        ;

    cout << year << endl;

    return 0;
}