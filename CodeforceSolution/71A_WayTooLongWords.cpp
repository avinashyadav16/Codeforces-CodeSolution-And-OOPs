/**
 *  @file: 71A_WayTooLongWords.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/71/A
 *  @date: 28-03-2024
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    cin >> size;
    while (size--)
    {
        string word;
        cin >> word;
        size = word.length();

        if (size > 10)
        {
            cout << word[0] << size - 2 << word[size - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}