/**
 *  @file: 10_Class_Template.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP code for Class Template
 *  @date: 02-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

template <class T>

class Number
{
private:
    T num;

public:
    Number(T n) : num(n)
    {
    }
    T getNum()
    {
        return num;
    }
};

int main()
{
    Number<int> numberInt(5);
    cout << "Integer Number = " << numberInt.getNum() << endl;

    Number<double> numberDouble(10.2);
    cout << "Double Number = " << numberDouble.getNum() << endl;

    return 0;
}