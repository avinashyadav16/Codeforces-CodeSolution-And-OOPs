/**
 *  @file: 443A_AntonAndLetters.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/443/A
 *  @date: 12-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    set<char> s;

    for (long long int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
        {
            s.insert(str[i]);
        }
    }

    cout << s.size() << endl;

    return 0;
}