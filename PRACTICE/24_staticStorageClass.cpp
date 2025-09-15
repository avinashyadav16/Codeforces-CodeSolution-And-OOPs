#include <bits/stdc++.h>
using namespace std;

// Function declaration
void func(void);

/* Global variable */
static int Global = 10;

// Function definition
void func(void)
{
    // local static variable
    static int Local = 5;
    Local++;
    cout << "Local is " << Local << " & Global is " << Global << endl;
}

int main()
{
    while (Global--)
    {
        func();
    }
    return 0;
}
