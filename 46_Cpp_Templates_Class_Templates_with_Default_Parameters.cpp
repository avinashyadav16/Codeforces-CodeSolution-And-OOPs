/**
 *  @file: Lecture_46.cpp
 *  @author: Avinash Yadav
 *  @brief: C++ Templates: Class Templates with Default Parameters
 *  @date: 24-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>


class BaseClass
{
private:
    T1 a;
    T2 b;
    T3 c;

public:
    BaseClass(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display(void)
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
        cout << "C = " << c << endl;
        cout << endl;
    }
};

int main()
{
    BaseClass<> obj1(10, 20.2, 'I');
    obj1.display();

    BaseClass<int, int, int> obj2(100, 200, 300);
    obj2.display();

    BaseClass<float, float, float> obj3(10.9, 20.8, 30.7);
    obj3.display();

    BaseClass<char, char, char> obj4('J', 'K', 'L');
    obj4.display();

    return 0;
}