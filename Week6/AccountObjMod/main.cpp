/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Main driver for Account object
 * 
 * Copyright (C) 2020 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/
 
#include <cstdlib>
#include <iostream>
#include <string>
#include "Account.h"

float* insert(float*,int&,int,float);

int main(int argc, char** argv) 
{
	Account acct1;
	Account acct2(1000, "Casey");
	
	acct1.print();
	acct2.print();
	
	Account acct3(acct1);
	acct3.print();

    return 0;
}
