/**
 *  @file: Lecture_44.cpp
 *  @author: Avinash Yadav
 *  @brief: Writing our First C++ Template in VS Code
 *  @date: 24-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

template <class T>

class Vector
{
public:
    T *arr;
    int size;

    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector<int> V1(3);
    V1.arr[0] = 1;
    V1.arr[1] = 2;
    V1.arr[2] = 3;

    Vector<int> V2(3);
    V2.arr[0] = 3;
    V2.arr[1] = 2;
    V2.arr[2] = 1;

    int result1 = V1.dotProduct(V2);
    cout << "Dot Product is: " << result1 << endl;

    Vector<float> V3(3);
    V3.arr[0] = 1.1;
    V3.arr[1] = 2.2;
    V3.arr[2] = 3.3;

    Vector<float> V4(3);
    V4.arr[0] = 3.3;
    V4.arr[1] = 2.2;
    V4.arr[2] = 1.1;

    float result2 = V3.dotProduct(V4);
    cout << "Dot Product is: " << result2 << endl;

    return 0;
}