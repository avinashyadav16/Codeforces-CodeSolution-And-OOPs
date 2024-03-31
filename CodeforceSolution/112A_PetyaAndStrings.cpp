/**
 *  @file: 112A_PetyaAndStrings.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/112/A
 *  @date: 01-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int compareStrings(const string &s1, const string &s2)
{
    string lowerS1 = s1;
    string lowerS2 = s2;

    transform(lowerS1.begin(), lowerS1.end(), lowerS1.begin(), ::tolower);
    transform(lowerS2.begin(), lowerS2.end(), lowerS2.begin(), ::tolower);

    if (lowerS1 < lowerS2)
    {
        return -1;
    }
    else if (lowerS1 > lowerS2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int result = compareStrings(s1, s2);

    cout << result << endl;

    return 0;
}