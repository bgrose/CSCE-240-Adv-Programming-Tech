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
		myArray(const myArray&); 
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
		//a1 = a2 
		myArray operator+(myArray&);
		void operator+=(myArray&);
		//a1 += a2

    int newOne, newTwo;
    newOne = data[0] + _obj2.data[0];
    newTwo = data[1] + _obj2.data[1];
    Pair temp(newOne, newTwo);

    return temp;

	private: 
		float* arr;
		//T* arr; 
		int size; 
	
};
