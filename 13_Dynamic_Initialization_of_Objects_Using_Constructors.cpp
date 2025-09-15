/**
 *  @file: Lecture_13.cpp
 *  @author: Avinash Yadav
 *  @brief: Dynamic Initialization of Objects Using Constructors
 *  @date: 08-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}

    // r is a float value like 0.04
    BankDeposit(int p, int y, float r);

    // r is a integer value like 14
    BankDeposit(int p, int y, int r);

    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "Principal amount was: " << principal << endl;
    cout << "Return value after " << years << " years is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << endl
         << "Enter the value of p y and r: ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << endl
         << "Enter the value of p y and R: ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}
