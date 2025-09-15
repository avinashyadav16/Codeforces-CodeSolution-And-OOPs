/**
 *  @file: 09_Function_Template.cpp
 *  @author: Avinash Yadav
 *  @brief: Class Template function
 *  @date: 02-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

template <class T>

T maximum(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
};

int main()
{
    char ch1, ch2, ch3;
    cout << "Enter two characters: ";
    cin >> ch1 >> ch2;
    ch3 = maximum(ch1, ch2);

    cout << "Maximum of two characters is: " << ch3 << endl;

    int a, b, c;
    cout << "\nEnter two integers: ";
    cin >> a >> b;
    c = maximum(a, b);
    cout << "Maximum of the two integers is: " << c << endl;

    float x, y, z;
    cout << "\nEnter two float values: ";
    cin >> x >> y;
    z = maximum(x, y);
    cout << "Maximum of the two float value is: " << z << endl;

    return 0;
}