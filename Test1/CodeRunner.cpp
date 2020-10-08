//
// Created by Bradley Grose on 10/7/2020.
// Copyright (c) 2020 Bradley Grose. All rights reserved under MIT License.
//

#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
    int *p1, *p2, i(100);
    p1 = new int;
    p2 = &i;
    *p1 = 10;
    *p2 = 20;
    cout << *p1 << "" << *p2 << "" << i << endl;
    p1 = p2;
    cout << *p1 << "" << *p2 << "" << i << endl;

    return 0;
}