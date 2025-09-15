/**
 *  @file: Lecture_43.cpp
 *  @author: Avinash Yadav
 *  @brief: C++ Templates: Must for Competitive Programming
 *  @date: 21-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
NOTES:
    Templates in c++ is defined as a blueprint or formula for creating a generic class or a function.
    Generic Programming is an approach to programming where generic types are used as parameters in algorithms to work for a variety of data types.
    To avoid having to write the same code for many data types, the simple concept is to pass the data type as a parameter.
    There are two types of templates in C++:
        Class templates
        Function template

    Syntax of Class Template:
        template<class Ttype>
        class class_name
        {
            //class body;
        }
        // Here Type is a placeholder type name, which will be specified when a class instantiated.

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>

class Calculator
{
private:
    T operand1, operand2;

public:
    Calculator(T num1, T num2)
    {
        operand1 = num1;
        operand2 = num2;
    }

    void displayResult()
    {
        cout << "The sum of " << operand1 << " and " << operand2 << " is " << add() << endl;
    }

    T add()
    {
        T result = operand1 + operand2;
        return result;
    }
};

int main()
{
    Calculator<int> intCalculator(8, 6);
    Calculator<float> floatCalculator(3.5, 2.6);
    Calculator<double> doubleCalculator(2.156, 5.234);

    intCalculator.displayResult();
    cout << endl;
    floatCalculator.displayResult();
    cout << endl;
    doubleCalculator.displayResult();
    cout << endl;

    return 0;
}
