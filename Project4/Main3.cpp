#include <cstdlib>
#include <iostream>
#include "myArray.h"

using namespace std; 

int main(int argc, char** argv) 
{
	cout << "This main will test operator>> and operator<<" << endl; 
	myArray a1(5, 1.5);
	
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing operator<< should print: " << endl;
	cout << "1.5 1.5 1.5 1.5 1.5" << endl;
	cout << a1 << endl;
	
	cout << "----------------------------------------------------" << endl; 
	cout << "Testing operator>> should print the 5 numbers you typed in: " << endl;
	cin >> a1; 
	cout << a1 << endl;
	
	return 0; 
	
}
