/**
 *  @file: Lecture_07.cpp
 *  @author: Avinash Yadav
 *  @brief: Member Friend Functions in C++
 *  @date: 07-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

// Forward declaration
class Complex;

class addComplex
{
public:
    void addComplexReal(Complex, Complex);
    void addComplexImag(Complex, Complex);
};

class Complex
{
private:
    int real;
    int imag;

    // Declaring member function as a friend of a class:
    friend void addComplex::addComplexReal(Complex, Complex);
    friend void addComplex::addComplexImag(Complex, Complex);

public:
    void setData(int r, int m)
    {
        real = r;
        imag = m;
    }

    void display(void)
    {
        if (imag < 0)
        {
            cout << "Complex Number is: " << real << " - i" << fabs(imag) << endl;
        }
        else
        {
            cout << "Complex Number is: " << real << " + i" << imag << endl;
        }
    }
};

void addComplex ::addComplexReal(Complex com1, Complex com2)
{
    int real_result = com1.real + com2.real;
    cout << "Sum of real part is: " << real_result << endl;
}

void addComplex ::addComplexImag(Complex com1, Complex com2)
{
    int imag_result = com1.imag + com2.imag;
    cout << "Sum of imaginary part is: " << imag_result << endl;
}

int main()
{
    Complex com1, com2, sumComplex;
    com1.setData(10, 20);
    com1.display();

    com2.setData(20, 10);
    com2.display();

    addComplex com3;
    com3.addComplexReal(com1, com2);
    com3.addComplexImag(com1, com2);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 *  @file: Lecture_07.cpp
 *  @author: Avinash Yadav
 *  @brief: Friend Classes
 *  @date: 08-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Complex;

class addComplex
{
public:
    void addComplexReal(Complex, Complex);
    void addComplexImag(Complex, Complex);
};

class Complex
{
private:
    int real;
    int imag;

    // Declaring class as friend of a class:
    friend class addComplex;

public:
    void setData(int r, int m)
    {
        real = r;
        imag = m;
    }

    void display(void)
    {
        if (imag < 0)
        {
            cout << "Complex Number is: " << real << " - i" << fabs(imag) << endl;
        }
        else
        {
            cout << "Complex Number is: " << real << " + i" << imag << endl;
        }
    }
};

void addComplex ::addComplexReal(Complex com1, Complex com2)
{
    int real_result = com1.real + com2.real;
    cout << "Sum of real part is: " << real_result << endl;
}

void addComplex ::addComplexImag(Complex com1, Complex com2)
{
    int imag_result = com1.imag + com2.imag;
    cout << "Sum of imaginary part is: " << imag_result << endl;
}

int main()
{
    Complex com1, com2, sumComplex;
    com1.setData(10, 20);
    com1.display();

    com2.setData(20, 10);
    com2.display();

    addComplex com3;
    com3.addComplexReal(com1, com2);
    com3.addComplexImag(com1, com2);

    return 0;
}
