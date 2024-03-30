#include <iostream>
using namespace std;

// declaring the variable which is to
// be made extern an initial value can
// also be initialized to x
int Global;

void externStorageClass()
{

    cout << "Demonstrating extern class" << endl;
    // telling the compiler that the variable
    // x is an extern variable and has been
    // defined elsewhere (above the main
    // function
    extern int Global;
    // printing the extern variables 'x'
    cout << "Value of the variable 'Global' "
         << "declared, as extern: " << Global << endl;

    // value of extern variable x modified
    Global = 11;
    // printing the modified values of extern variables 'x'
    cout << "Modified value of the variable 'Global'"
         << " declared as extern: " << Global;
}

int main()
{
    // To demonstrate extern Storage Class
    externStorageClass();
    return 0;
}
