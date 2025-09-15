/**
 *  @file: Lecture_45.cpp
 *  @author: Avinash Yadav
 *  @brief: C++ Templates: Templates with Multiple Parameters
 *  @date: 24-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

template <class T1, class T2>

class Myclass
{
public:
    T1 data1;
    T2 data2;

    Myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << "Data1: " << this->data1 << endl;
        cout << "Data2: " << this->data2 << endl;
        cout << endl;
    }
};

int main()
{
    Myclass<int, int> obj1(10, 20);
    obj1.display();

    Myclass<int, float> obj2(10, 20.2);
    obj2.display();

    Myclass<int, char> obj3(10, 'a');
    obj3.display();

    Myclass<float, char> obj4(20.2, 'b');
    obj4.display();

    return 0;
}