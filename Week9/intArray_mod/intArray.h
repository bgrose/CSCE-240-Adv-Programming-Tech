/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Account object header
 * 
 * Copyright (C) 2020 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/
#include <iostream>
using namespace std;

class intArray {
	
	friend intArray operator+(int,intArray&); //#5
	public:
	
		intArray(); //Default
		intArray(int, int); //Alternate constructor
		intArray(const intArray&); // #1 Copy constructor 
		~intArray(); //Destructor 
		
		void print() const; 
		int operator[](int) const; //#2
		//What if we want to go the other way?
		int& operator[](int);
		//~ int operator()(int);
		//~ void operator()(int,int);
		//~ void operator()(int,int,int);
		
		intArray& operator=(intArray obj2); // #3 obj1 = obj2 = obj3
		intArray operator+(intArray& obj2) const; //#4 obj1 = obj2 + obj3 concat!!
		
		
		int* getData() const; 
		int getSize() const;
		
	private:
	
		int *data; 
		int size;
		void setData(int*); 
		void setSize(int);

};
