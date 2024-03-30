/**
 *  @file: Lecture_48.cpp
 *  @author: Avinash Yadav
 *  @brief: Member Function Templates & Overloading Template Functions in C++
 *  @date: 25-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

template <class T>

class Base
{
public:
    T data;

    Base(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Base<T>::display()
{
    cout << data << endl;
}

void fun(int a)
{
    cout << "Exact match fun(): " << a << endl;
}

template <class T>
void fun(T a)
{
    cout << "Templatised fun(): " << a << endl;
}

int main()
{
    Base<int> obj(20);
    cout << obj.data << endl;
    obj.display();

    fun(4); // Exact match takes the highest priority
    fun(4.47);
    fun('A');
    return 0;
}
