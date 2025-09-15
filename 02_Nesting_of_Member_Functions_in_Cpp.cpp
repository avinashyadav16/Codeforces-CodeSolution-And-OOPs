/**
 *  @file: Lecture_02.cpp
 *  @author: Avinash Yadav
 *  @brief: Nesting of Member Functions in C++
 *  @date: 04-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
Notes:
 Nesting of Member Functions means that agar aapka already koi ek function hai jo aapne bana rakha hai
 jo ki aapka private varables use kar rha hai ya kisi bhi tarah ka function hai to aap us function ke
 ander se doosre function ko call kar sakte hai bina DOT operator lagaye.
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Binary
{
private:
    string bin;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter the Number in Binary Format: ";
    cin >> bin;

    // Nesting of Member Functions
    chk_bin();
}

void Binary ::chk_bin(void)
{
    for (int i = 0; i < bin.length(); i++)
    {
        if (bin.at(i) != '0' && bin.at(i) != '1')
        {
            cout << bin << " is not in a Binary Format." << endl;
            exit(0);
        }
    }
}

void Binary ::ones_complement(void)
{
    cout << "\nBinary Number: ";

    // Nesting of Member Functions
    display();
    for (int i = 0; i < bin.length(); i++)
    {
        if (bin.at(i) == '0')
        {
            bin.at(i) = '1';
        }
        else if (bin.at(i) == '1')
        {
            bin.at(i) = '0';
        }
    }
    cout << "\nOne's Compliment: ";

    // Nesting of Member Functions
    display();
}

void Binary ::display(void)
{
    for (int i = 0; i < bin.length(); i++)
    {
        cout << bin.at(i);
    }
}

int main()
{
    Binary b1;
    b1.read();
    // b1.chk_bin();
    // b1.display();
    b1.ones_complement();
    // b1.display();
    return 0;
}