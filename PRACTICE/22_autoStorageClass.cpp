#include <iostream>
#include <typeinfo> // Include this header for typeid
using namespace std;

void autoStorageClass()
{
    cout << "Demonstrating auto class" << endl;

    // Declaring auto variables. No data-type declaration needed
    auto a = 4;
    auto b = 3.37;
    auto c = 3.37f;
    auto d = 'a';
    auto ptr = &a;
    auto pptr = &ptr; // pointer to a pointer

    // Printing the auto variables with more meaningful type information
    cout << "Type of a: " << typeid(a).name() << ", Value: " << a << endl;
    cout << "Type of b: " << typeid(b).name() << ", Value: " << b << endl;
    cout << "Type of c: " << typeid(c).name() << ", Value: " << c << endl;
    cout << "Type of d: " << typeid(d).name() << ", Value: " << d << endl;
    cout << "Type of d: " << typeid(ptr).name() << ", Value: " << *ptr << endl;
    cout << "Type of d: " << typeid(pptr).name() << ", Value: " << **pptr << endl;

    /*
    OUTPUT:
        Demonstrating auto class
            Type of a: i, Value: 4
            Type of b: d, Value: 3.37
            Type of c: f, Value: 3.37
            Type of d: c, Value: a
            Type of d: Pi, Value: 4
            Type of d: PPi, Value: 4
    */
}

int main()
{
    // To demonstrate auto Storage Class
    autoStorageClass();
    return 0;
}

/*
typeid(x).name() returns the data type of x, for example, it returns:

‘i’ for integers,
‘d’ for doubles,
‘f’ for float,
‘c’ for char,
‘Pi’ for the pointer to the integer,
‘Pd’ for the pointer to double,’
‘Pf’ for the pointer to float,
‘Pc’ for the pointer to char,
‘PPi’ for the pointer to pointer to integer.
Single Pointer results in  prefix ‘P’,
double-pointer results in ‘PP’ as a prefix and so on.
*/