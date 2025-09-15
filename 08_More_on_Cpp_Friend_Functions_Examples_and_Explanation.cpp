/**
 *  @file: Lecture_08.cpp
 *  @author: Avinash Yadav
 *  @brief: More on C++ Friend Functions (Examples & Explanation)
 *  @date: 08-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

class class2;

class class1
{
private:
    int data1;
    friend void add(class1, class2);
    friend void swap(class1 &, class2 &);

public:
    void setData(int val)
    {
        data1 = val;
    }
};

class class2
{
private:
    int data2;
    friend void add(class1, class2);
    friend void swap(class1 &, class2 &);

public:
    void setData(int val)
    {
        data2 = val;
    }
};

void add(class1 obj1, class2 obj2)
{
    cout << "Sum is: " << obj1.data1 + obj2.data2 << endl;
}

void swap(class1 &obj1, class2 &obj2)
{
    cout << "\nBefore Swapping:" << endl;
    cout << "Class1 data = " << obj1.data1 << endl;
    cout << "Class2 data = " << obj2.data2 << endl;

    int temp = obj1.data1;
    obj1.data1 = obj2.data2;
    obj2.data2 = temp;

    cout << "\nAfter Swapping:" << endl;
    cout << "Class1 data = " << obj1.data1 << endl;
    cout << "Class2 data = " << obj2.data2 << endl;
}

int main()
{
    class1 obj1;
    obj1.setData(64);

    class2 obj2;
    obj2.setData(36);

    add(obj1, obj2);
    swap(obj1, obj2);

    return 0;
}