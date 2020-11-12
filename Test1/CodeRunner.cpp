//
// Created by Bradley Grose on 10/7/2020.
// Copyright (c) 2020 Bradley Grose. All rights reserved under MIT License.
//

#include <iostream>

using namespace std;


template <class T>

T sum(T,T){

    static int p = 0;

    p++;

    cout << p << endl;

}

int main(){

    int a(10), sum1;

    double f(3.1);

    sum1 = sum(a,f);

    return 0;

}