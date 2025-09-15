/**
 *  @file: Lecture_27.cpp
 *  @author: Avinash Yadav
 *  @brief: Solution to Exercise on Cpp Inheritance
 *  @date: 12-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class SimpleCalcs
{
private:
    int num1;
    int num2;

public:
    void set_simple(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void get_simple(void)
    {
        cout << "Sum is: " << num1 + num2 << endl;
        cout << "Difference is: " << num1 - num2 << endl;
        cout << "Product is: " << num1 * num2 << endl;
        cout << ((num1 >= num2) ? "Division is: " + to_string(num1 / num2) : "Division not possible") << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class ScientificCalcs
{
private:
    int val1, val2;

public:
    void set_scientific(int a, int b)
    {
        val1 = a;
        val2 = b;
    }

    void get_scientific(void)
    {
        cout << "Square root of " << val1 << " is: " << sqrt(val1) << endl;
        cout << "Power of " << val1 << " to " << val2 << " is: " << pow(val1, val2) << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class HybridCalcs : public SimpleCalcs, public ScientificCalcs
{
public:
    void get_hybrid(void)
    {
        cout << "\n------ Simple Calculations ------" << endl;
        get_simple();

        cout << "\n------ Scientific Calculations ------" << endl;
        get_scientific();
    }
};

int main()
{
    HybridCalcs hybrid;

    hybrid.set_simple(10, 5);
    hybrid.set_scientific(9, 3);

    hybrid.get_hybrid();

    return 0;
}