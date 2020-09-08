//
// Created by Bradley Grose on 9/8/2020.
// Copyright (c) 2020 Bradley Grose. All rights reserved under MIT License.
//

#include "pointers.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    int x(0);
    x = 100;

    int *xPtr;
    xPtr = &x;

    *xPtr = 200;

    cout << "Location of X is " << &x << endl;
    cout << "Value of X is " << x << endl;

    cout << "Location of xPtr is " << &xPtr << endl;
    cout << "value of xPtr is " << &xPtr << endl;
    cout << "value of what xPtr is pointing to is " << *xPtr << endl;
    return 0;

    int arr[5] = {1, 1, 1, 1, 1};

    //Extend method
    int newArr[6] = {0};

    for( int i = 0; i < 5; i++)
    {
        newArr[i] = arr[i];
    }

    newArr[5] = 10;
}