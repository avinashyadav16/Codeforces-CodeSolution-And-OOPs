/**
 *  @file: 520A_Pangram.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/520/A
 *  @date: 10-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    string str;
    cin >> str;

    set<char> letters;

    for (char ch : str)
    {
        if (isalpha(ch))
        {
            letters.insert(tolower(ch));
        }
    }

    if (letters.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}