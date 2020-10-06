/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Pair object header
 * 
 * Copyright (C) 2020 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/
#include <iostream>
using namespace std;
 
 
class Pair {
    friend ostream& operator<<(ostream& os, Pair&);

    friend istream& operator>>(istream& is, Pair&);

	public:
	
		Pair();
		Pair(int,int);
		
		void print();
		Pair& operator=(Pair);
		Pair operator+(Pair&);
		Pair operator-();
		

	private:	
		
		//Private Member Variables
		int data[2] = {0};
		
};
