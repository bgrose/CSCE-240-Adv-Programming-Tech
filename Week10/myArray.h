/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: myArray object header file
 * 
 * Copyright (C) 2020 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/

//Pre Proceesor Directives
#ifndef MY_ARRAY
#define MY_ARRAY
#include <iostream>
using namespace std;

template <class T = float> 
class myArray {
	//friend istream& operator>>(istream& is, myArray& rhs)
	
	//friend ostream& operator<<(ostream& os, myArray&)
	
	public: 
		myArray(); 
		myArray(int,T); 
		//~ myArray(T*, int);
		//~ myArray(const myArray<T>&); 
		~myArray();
		
		//~ void insert(int,T);
		//~ void remove(int);
		
		//~ float get(int);
		//~ void clear(); 
		
		//~ int find(T);
		//~ bool equals(myArray<T>&);
		 
		//~ void init(); 
		void print();
		
		//~ float operator[](int); 
		//~ void operator()(int, float); 
		//~ myArray& operator=(myArray);
		//~ //a1 = a2 
		//~ myArray operator+(myArray&);
		//~ void operator+=(myArray& obj2 );
		//~ {
			//~ float *temp = arr;
			//~ arr = new float[newSize]; //newSize = size + obj2.size
			//~ size = newSize; 
			//~ //[1,2,4] + [5] = [1,2,4,5]
			//~ for loops 
			   //~ arr[i] 
		//~ }
		//~ //a3 += a1 += a2
		//~ //should modify 
		//~ //resizing arr
		
	private: 
		//float* arr;
		T* arr; 
		int size; 
	
};
#endif
