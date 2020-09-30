#include <cstdlib>
#include <iostream>
#include "myArray.h"

using namespace std; 

int main(int argc, char** argv) 
{
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing default constructor (should print blank line): " << endl;
	myArray a1; 
	a1.print(); 
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing alt constructor myArray(int,float) (should print 1 1 1 ): " << endl;
	myArray a2(3,1); 
	a2.print(); 
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing alt constructor myArray(float*, int) (should print 2 2 2 ): " << endl;
	float *temp; 
	temp = new float[3]; 
	for(int i = 0; i < 3; i++) temp[i] = 2;
	myArray a3(temp, 3); 
	delete [] temp; 
	a3.print(); 
	
	return 0; 
	
}
