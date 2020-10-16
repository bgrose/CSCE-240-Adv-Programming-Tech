#include <cstdlib>
#include <iostream>
#include "myArray.h"

using namespace std; 

int main(int argc, char** argv) 
{
	cout << "This main will test operator[] and operator()" << endl; 
	float *temp; 
	temp = new float[3]; 
	for(int i = 0; i < 3; i++) temp[i] = i;
	myArray a1(temp, 3); 
	delete [] temp; 
	
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing operator[] with legal index (should print out 1): " << endl;
	
	cout << a1[1] << endl; 

	cout << "----------------------------------------------------" << endl; 
	cout << "Testing operator[] with illegal index (should print out Error: index not found twice): " << endl;
	
	cout << a1[-1] << endl;
	cout << a1[3] << endl;
	
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing operator() with legal index (should print out  1.1 1 2): " << endl;
	a1(0,1.1); 
	a1.print();
	
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing operator() with illegal index (should print out Error: index not found twice and then 1.1 1 2 - no change should be made): " << endl;
	a1(-1,1.1); 
	a1(3,1.1);
	a1.print();
	
	return 0; 
	
}
