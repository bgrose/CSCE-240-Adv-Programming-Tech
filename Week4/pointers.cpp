//
// Created by Bradley Grose on 9/8/2020.
// Copyright (c) 2020 Bradley Grose. All rights reserved under MIT License.
//

#include "pointers.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
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


    //THIS IS NOT EFFICENT FOR MEMORY ALOCATION

    int arr[5] = {1, 1, 1, 1, 1};

    //Extend method
    int newArr[6] = {0};

    for (int i = 0; i < 5; i++) {
        newArr[i] = arr[i];
    }

    newArr[5] = 10;


    //DYNAMIC ARRAYS

    int *arr;       //Pointer for Mem Location
    //~ int arr1[0];
    //~ cout << arr << endl;
    //~ arr = arr1;     //Points to memory location

    arr = new int[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = 0;
    }

    int *temp
    temp = arr;

    arr = new int[6];
    for (int i = 0; i < 5; i++) {
        arr[i] = temp[i];
    }
    arr[5] = 0;

    delete [] temp;

    return 0;
}