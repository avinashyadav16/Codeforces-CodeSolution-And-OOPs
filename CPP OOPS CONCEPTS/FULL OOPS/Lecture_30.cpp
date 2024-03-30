/**
 *  @file: Lecture_30.cpp
 *  @author: Avinash Yadav
 *  @brief: Revisiting Pointers: new and delete Keywords in CPP
 *  @date: 13-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // NEW KEYWORD: dynamic memory allocation
    // type *pointer_variable = new type;
    // type *array_pointer_variable = new type[size];

    int a = 10;
    int *ptr1 = &a;
    cout << "\nThe value at the address of ptr1 is: " << *(ptr1) << endl;

    float b = 100.99;
    float *ptr2 = new float(b);
    cout << "\nThe value at the address of ptr2 is: " << *(ptr2) << endl;

    int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    *arr = 10;
    *(arr + 1) = 20;
    *(arr + 2) = 30;
    cout << "\nThe value at the address of arr[0] is: " << arr[0] << endl;
    cout << "The value at the address of arr[1] is: " << arr[1] << endl;
    cout << "The value at the address of arr[2] is: " << arr[2] << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // DELETE KEYWORD: dynamic memory deallocation
    // delete pointer_variable;      // Deallocates memory for a single variable
    // delete[] array_pointer_variable;  // Deallocates memory for an array

    // for deleting the dynamically allocated memory
    delete ptr2;
    cout << "\nThe value at the address of ptr2 is: " << *(ptr2) << endl;

    // for deleting the dynamically allocated block of memory
    delete[] arr;
    cout << "\nThe value at the address of arr[0] is: " << arr[0] << endl;
    cout << "The value at the address of arr[1] is: " << arr[1] << endl;
    cout << "The value at the address of arr[2] is: " << arr[2] << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    When you delete a dynamically allocated array using delete[] arr;,
    the memory is deallocated, but the values at the addresses where the array elements were stored are not immediately cleared or changed.
    The memory is marked as available for reuse, but the actual values may remain intact until that memory is reallocated and overwritten by some other data.

    In your case, when you access arr[0], arr[1], and arr[2] after deleting the array,
    you might still see the correct values because the memory hasn't been overwritten or reused by other parts of the program yet.
    However, relying on this behavior is dangerous and not a good programming practice.
    It's undefined behavior, and the program may behave differently on different compilers or under different conditions.

    To avoid undefined behavior and potential issues,
    it's crucial to avoid accessing memory that has been freed.
    After deleting the array, set the pointer to nullptr to avoid accidental access:
    */
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Set the pointer to nullptr after deletion
    arr = nullptr;

    // Now, you can check if the pointer is nullptr before accessing the memory.
    if (arr == nullptr)
    {
        cout << "\nInside if block." << endl;
        cout << "array has been deleted." << endl;
    }

    cout << "\nThe value at the address of arr[0] is: " << arr[0] << endl;
    cout << "The value at the address of arr[1] is: " << arr[1] << endl;
    cout << "The value at the address of arr[2] is: " << arr[2] << endl;

    return 0;
}