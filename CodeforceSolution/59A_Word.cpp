/**
 *  @file: 59A_Word.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/59/A
 *  @date: 06-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    long long int lower = 0, upper = 0;
    for (char c : str)
    {
        if (isupper(c))
            upper++;
        else if (islower(c))
            lower++;
    }

    if (upper > lower)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    cout << str << endl;

    return 0;
}




// Method - 02
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, res = "";
    cin >> str;

    long long int lower = 0, upper = 0;
    for (char c : str)
    {
        if (isupper(c))
        {
            upper++;
        }
        if (islower(c))
        {
            lower++;
        }
    }

    if (upper > lower)
    {
        for (char c : str)
        {
            if (islower(c))
                res += toupper(c);
            else
                res += c;
        }
    }
    else if (upper <= lower)
    {
        for (char c : str)
        {
            if (isupper(c))
                res += tolower(c);
            else
                res += c;
        }
    }

    cout << res << endl;

    return 0;
}
*/