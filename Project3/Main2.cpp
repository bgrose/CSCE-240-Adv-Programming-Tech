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
	cout << "Testing clear() (should print blank line ): " << endl;
	a2.clear();
	a2.print();
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing get() (should print 1 and then error ): " << endl;
	cout << a3.get(1) << endl;
	a3.get(5);
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing init() (should print the values that you entered): " << endl;
	a3.init();
	a3.print();
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing equals (should print Correct twice): " << endl;
	if(a3.equals(a3)) cout << "Correct" << endl;
	else cout << "Incorrect" << endl;
	if(a3.equals(a1)) cout << "Incorrect" << endl;
	else cout << "Correct" << endl;
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing find (should print 0 and then -1): " << endl;
	cout << a1.find(0) << endl;
	cout << a1.find(2) << endl;
	
	return 0; 
	
}
