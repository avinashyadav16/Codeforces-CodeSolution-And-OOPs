/**
 *  @file: 19_Transform_Method.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP code for Transform() Method
 *  @date: 14-11-2023
 */

/*
transform() in C++ is used in two forms:

1. Unary Operation : Applies a unary operator on input to convert into output:
        transform(Iterator inputBegin, Iterator inputEnd, Iterator OutputBegin, unary_operation)


2. Binary Operation: Applies a binary operator on input to convert into output
        transform(Iterator inputBegin1, Iterator inputEnd1, Iterator inputBegin2, Iterator OutputBegin, binary_operation)



More examples:
We can use transform to convert a string to upper case (See this)
We can modify above examples for vectors also.
// vect is a vector of integers.
        transform(vect.begin(), vect.end(), vect.begin(), increment);

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
        int arr1[] = {1, 2, 3};
        int arr2[] = {4, 5, 6};
        // int arr1[] = {1, 2, 3, 9, 10, 11};
        // int arr2[] = {4, 5, 6};

        int size = sizeof(arr1) / sizeof(arr1[0]);
        int res[size];

        transform(arr1, arr1 + size, arr2, res, plus<int>());

        cout << "The result is: " << endl;
        for (int i = 0; i < size; i++)
        {
                cout << res[i] << " ";
        }

        return 0;
}