/**
 *  @file: Lecture_06.cpp
 *  @author: Avinash Yadav
 *  @brief: Friend Functions in C++
 *  @date: 07-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void setData(int r, int im)
    {
        real = r;
        imag = im;
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

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Friend Functions are not the class attributes rather they help in accessing the private data members.
    // PROPRETIES:
    //     - Not in the scope of the class.
    //     - Therefore it can not be called by the objects of the class: c4.addCompelx() -> invalid
    //     - Can be invoked without the help of any objects.
    //     - Usually contains the objects as the parameter.
    //     - Can be decalared inside private or public.
    //     - Can't access the members of the class directly by their name and they need object_name.member_name type declaration

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    friend Complex addComplex(Complex, Complex);
};

Complex addComplex(Complex com1, Complex com2)
{
    Complex com3;
    com3.setData(com1.real + com2.real, com1.imag + com2.imag);
    return com3;
}

int main()
{
    Complex com1, com2, sumComplex;
    com1.setData(10, 20);
    com1.display();

    com2.setData(20, 10);
    com2.display();

    sumComplex = addComplex(com1, com2);
    sumComplex.display();

    return 0;
}