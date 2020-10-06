/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Main driver for Pair object
 * 
 * Copyright (C) 2020 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/
 
#include <cstdlib>
#include <iostream>
#include <string>
#include "Pair.h"


int main(int argc, char** argv) 
{
	Pair p1(10, 10);
    Pair p2(20, 20);
    Pair p4;
    cout << "P1: " << p1 << endl;
    cout << "P2: " << p2 << endl;

    p4 = -p1;
    cout << "-P1: " << p4 << endl;
    //p1.operator[](int);


    Pair p3;
    p3 = p1 + p2;
    cout << "P1+P2: " << p3 << endl;
    // p3.operator=(p1.operator+(p2));


	cout << "P1: " << p1 << endl;
	cin >> p1;
    cout << "P1: " << p1 << endl;



    return 0;
}
