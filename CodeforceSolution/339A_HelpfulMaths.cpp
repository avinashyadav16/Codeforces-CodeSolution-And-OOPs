/**
 *  @file: 339A_HelpfulMaths.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/339/A
 *  @date: 01-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    vector<string> vec;

    stringstream ss(str);

    while (ss.good())
    {
        string substr;
        getline(ss, substr, '+');
        vec.push_back(substr);
    }

    sort(vec.begin(), vec.end());
    int i;
    for (i = 0; i < vec.size() - 1; i++)
    {
        cout << vec[i] << "+";
    }
    cout << vec[i];
    return 0;
}