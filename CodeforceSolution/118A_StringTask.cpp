/**
 *  @file: 118A_StringTask.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/118/A
 *  @date: 05-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y';
}

int main()
{
    string str;
    cin >> str;

    string result;
    for (char ch : str)
    {
        if (!isVowel(ch))
        {
            result += '.';
            result += tolower(ch);
        }
    }

    cout << result << endl;

    return 0;
}