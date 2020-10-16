#include <cstdlib>
#include <iostream>
#include "myArray.h"

using namespace std; 

int main(int argc, char** argv) 
{
	cout << "This main will test operator= and operator+ and operator +=" << endl; 
	float *temp; 
	temp = new float[3]; 
	for(int i = 0; i < 3; i++) temp[i] = i;
	myArray a1(temp, 3); 
	delete [] temp; 
	myArray a2, a3;
	
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing operator= should print: " << endl;
	cout << "0 1 2" << endl;
	cout << "0 1 2" << endl;
	cout << "0 1 2\n\n" << endl;
	a3 = a2 = a1; 
	a1.print(); 
	a2.print();
	a3.print();
	
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing operator+ should print: " << endl;
	cout << "0 1 2" << endl;
	cout << "0 1 2" << endl;
	cout << "0 2 4\n\n" << endl;
	a3 = a2 + a1; 
	a1.print(); 
	a2.print();
	a3.print();
	
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing operator+= should print: " << endl;
	cout << "0 1 2" << endl;
	cout << "0 2 4 0 1 2\n\n" << endl;
	a3 += a1; 
	a1.print(); 
	a3.print();
	
	
	return 0; 
	
}
