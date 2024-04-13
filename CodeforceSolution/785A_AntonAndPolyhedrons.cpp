/**
 *  @file: 785A_AntonAndPolyhedrons.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/785/A
 *  @date: 12-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, total = 0;
    cin >> n;

    while (n--)
    {
        string str;
        cin >> str;
        if (str == "Tetrahedron")
        {
            total += 4;
        }
        else if (str == "Cube")
        {
            total += 6;
        }
        else if (str == "Octahedron")
        {
            total += 8;
        }
        else if (str == "Dodecahedron")
        {
            total += 12;
        }
        else if (str == "Icosahedron")
        {
            total += 20;
        }
    }

    cout << total << endl;

    return 0;
}