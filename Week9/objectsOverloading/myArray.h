/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: myArray object header file
 * 
 * Copyright (C) 2020 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/
#include <iostream>
using namespace std;

class myArray {
	friend istream& operator>>(istream&, myArray&); 
	friend ostream& operator<<(ostream&, myArray&);
	public: 
		myArray(); 
		myArray(int,float); 
		myArray(float*, int);
		~myArray();
		
		void insert(int,float);
		void remove(int);
		
		float get(int);
		void clear(); 
		
		int find(float);
		bool equals(myArray&);
		 
		void init(); 
		void print();
		
		float operator[](int); 
		void operator()(int, float); 
		myArray& operator=(myArray);
		myArray operator+(myArray&);
		void operator+=(myArray&);
		
	private: 
		float* arr; 
		int size; 
	
};
