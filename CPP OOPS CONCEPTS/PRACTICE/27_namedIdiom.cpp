// CPP program to demonstrate named constructor idiom
/*
Constructor can be defined in private section of class.
    1. Using Friend Class
    2. Using Singleton design pattern
    3. Named Constructor Idiom
                Since constructor has same name as of class, different constructors are differentiated by their parameter list,
                but if numbers of constructors is more, then implementation can become error prone.
                With the Named Constructor Idiom, you declare all the class’s constructors in the private or protected sections,
                and then for accessing objects of class, you create public static functions.
*/

#include <bits/stdc++.h>
using namespace std;

class Point
{
private:
    float x1, y1;
    Point(float x, float y)
    {
        x1 = x;
        y1 = y;
    };

public:
    // polar(radius, angle)
    static Point Polar(float, float);

    // rectangular(x, y)
    static Point Rectangular(float, float);
    void display();
};

void Point ::display()
{
    cout << "x = " << this->x1 << endl;
    cout << "y = " << this->y1 << endl;
    cout << endl;
}

// return polar coordinates
Point Point ::Polar(float x, float y)
{
    return Point(x * cos(y), x * sin(y));
}

// return rectangular coordinates
Point Point ::Rectangular(float x, float y)
{
    return Point(x, y);
}

int main()
{
    // Polar coordinates
    Point pp = Point::Polar(5.7, 1.2);
    cout << "polar coordinates" << endl;
    pp.display();

    // rectangular coordinates
    Point pr = Point::Rectangular(5.7, 1.2);
    cout << "rectangular coordinates" << endl;
    pr.display();
    return 0;
}
