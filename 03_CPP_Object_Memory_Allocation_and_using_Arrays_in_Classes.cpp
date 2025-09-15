/**
 *  @file: Lecture_03.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP Object Memory Allocation & using Arrays in Classes
 *  @date: 05-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Market
{
private:
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void getPrice(void);
};

void Market::setPrice(void)
{
    cout << "Press -1 to exit" << endl;
    while (counter < 100)
    {
        cout << "Enter the itemID of item number_" << counter + 1 << ": ";
        cin >> itemID[counter];
        if (itemID[counter] == -1)
        {
            break;
        }
        cout << "Enter the itemPrice of item number_" << counter + 1 << ": ";
        cin >> itemPrice[counter];

        counter++;
    }
}

void Market ::getPrice(void)
{
    cout << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of itemID-" << itemID[i] << " is: " << itemPrice[i] << endl;
    }
}

int main()
{
    Market shop1;
    shop1.initCounter();
    shop1.setPrice();
    shop1.getPrice();

    return 0;
}