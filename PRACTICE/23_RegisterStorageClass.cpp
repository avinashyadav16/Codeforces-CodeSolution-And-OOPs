#include <iostream>
using namespace std;

void registerStorageClass()
{
    cout << "Demonstrating register class" << endl;

    // declaring a register variable
    register char a; // checking the initial value without initializers
    register char b = 'B';

    // printing the register variable's value:
    cout << "Value of the variable 'a' declared as register: " << a << endl; // the initial value of a is undefined.
    cout << "Value of the variable 'b' declared as register: " << b << endl;
}

int main()
{
    // To demonstrate register Storage Class
    registerStorageClass();
    return 0;
}

/*
In modern C++, the register keyword is mostly deprecated, and compilers are free to ignore it.
The use of register was historically a hint to the compiler that a variable would be heavily used and
should be stored in a CPU register for faster access.
However, modern compilers are often better at making such optimization decisions on their own, and the register keyword is generally not needed.

However, as mentioned earlier, the use of register doesn't guarantee that the variable will be stored in a register, and
compilers are free to ignore the register keyword.
In modern C++, it's usually recommended not to use register unless you have specific reasons and
profiling data indicating that it provides a performance benefit, which is rare.
*/