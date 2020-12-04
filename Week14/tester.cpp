//
// Created by Bradley Grose on 11/29/2020.
// Copyright (c) 2020 Bradley Grose. All rights reserved under MIT License.
//
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;



int main(int argc, char **argv)
{
    char *data;
    int *a, b(10);
    a = new int;
    a = &b;
    data = new char[5];
    delete a;
    delete [] data;
    return 0;
}
