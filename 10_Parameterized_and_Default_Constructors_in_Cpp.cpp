/**
 *  @file: Lecture_10.cpp
 *  @author: Avinash Yadav
 *  @brief: Parameterized and Default Constructors In C++
 *  @date: 08-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Numbers
{
private:
    int num1, num2;

public:
    // Parameterized Constructors:
    Numbers(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void print()
    {
        cout << num1 << " and " << num2 << endl;
    }
};

int main()
{
    // Implicit Call:
    Numbers obj1(4, 7);
    obj1.print();

    // Explicit Call
    Numbers obj2 = Numbers(8, 14);
    obj2.print();

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Points
{
private:
    int x, y;

public:
    Points()
    {
        x = 0;
        y = 0;
    }

    Points(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoints()
    {
        cout << "Points are: X = " << x << ", Y = " << y << endl;
    }

    int calDistance(Points, Points);
};

int Points::calDistance(Points p1, Points p2)
{
    int distance = sqrt((pow((p2.x - p1.x), 2)) + (pow((p2.y - p1.y), 2)));
    return distance;
}

int main()
{
    Points p1(0, 3);
    p1.displayPoints();

    Points p2(4, 0);
    p2.displayPoints();

    Points p3;
    cout << "The distance between points is: " << p3.calDistance(p1, p2) << endl;

    return 0;
}