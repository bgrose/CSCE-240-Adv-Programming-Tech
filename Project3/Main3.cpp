#include <cstdlib>
#include <iostream>
#include "myArray.h"

using namespace std; 

int main(int argc, char** argv) 
{
	myArray a1(3,0); 
	a1.print(); 
	myArray a2(3,1); 
	a2.print(); 
	float *temp; 
	temp = new float[3]; 
	for(int i = 0; i < 3; i++) temp[i] = i;
	myArray a3(temp, 3); 
	delete [] temp; 
	 
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing insert() (should print 0 1.5 0 0 ): " << endl;
	a1.insert(1,1.5); 
	a1.print();
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing remove() (should print 0 0 0 ): " << endl;
	a1.remove(1);
	a1.print();
	
	
	return 0; 
	
}
