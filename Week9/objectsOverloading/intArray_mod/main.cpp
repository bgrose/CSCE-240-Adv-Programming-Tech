#include <cstdlib>
#include <iostream>
#include <string>
#include "intArray.h"


int main(int argc, char** argv) 
{
	intArray a1(5, 1);
	
	intArray a2(5,2);
	
	//a1+a2; //a1 += a2
	//a1.operator+(a2);
	//~ cout << "Array 1 After: " << endl; 
	//~ a1.print(); 
	//~ cout << "Array 2 After: " << endl; 
	//~ a2.print();
	
	intArray a3(5,0); 
	
	//(a1+a2).print();
	
	//~ a3 = a1 + a2 + a1 + a2;
	//~ cout << "A3: " << endl;
	//~ a3.print();
	//~ cout << "A2: " << endl;
	//~ a2.print();
	//~ cout << "A1 before: " << endl;
	//~ a1.print();
	//cout << a1[0] << end;
	
	//~ cout << "A1 after (): " << endl;
	//~ a1(0,3); 
	//~ a1.print();
	
	//~ cout << "A1 after []: " << endl;
	//~ a1[0] = 100;  
	//~ a1.print(); 
	//a1.operator[](int) = 100;
	//~ cout << "A2 before: "; 
	//~ a2.print();
	//~ a2 = ++a1;
	//~ cout << "A1 after: "; 
	//~ a1.print();
	//~ cout << "A2 after: "; 
	//~ a2.print();
	//~ cout << "A1 before: " << a1;
	//~ cout << "A2 before: " << a2;
	//~ cin >> a1 >> a2;
	//~ cout << "A1 after: " << a1;
	//~ cout << "A2 after: " << a2;
	
	//[0,0,0]
	cout << "A3 before: " << a3;
	cout << "A2 before: " << a2;
	a3 = 1 + a2;
	cout << "A3 after: " << a3;
	cout << "A2 after: " << a2;
	//[1,0,0,0]
	//a2 + 1
	//~ cout.operator<<(a2);
	//~ a2 << cout;
	//a2.operator<<(cout);
	//~ a1 = a2; 
	//~ a1.operator=(a2);
	//++a1;
	//operator++
	//-a1;
	//~ int i, j;
	//~ i = j = 0; 
	//~ j = ++i; 
	
	int *p; 
	p = new int; 
	*p = 10;
	delete p; 
	cout << *p << endl;
	
	return 0; 
}
