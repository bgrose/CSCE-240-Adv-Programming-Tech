#include <cstdlib>
#include <iostream>
#include <string>
#include "intArray.h"


int main(int argc, char** argv) 
{
	intArray a1(5,5), a2(2,2), a3(a2);
	
	//~ a1.print();
	//~ a2.print();  
	//a3.print();
	//~ cout << a1[0] << endl;
	//~ a1[0] = 0 ; //a1.operator[](int)
	//~ //a1(0,0); 
	//~ cout << a1[0] << endl;
	//~ int array[5] = {0}; 
	//~ cout << array[0]; 
	//~ array[0] = 10; 
	
	//~ a2 = a1 + a2; 
	//~ a1.print();
	//~ a2.print();
	//[5,5,5,5,5,2,2]
	
	//~ a3 = a1 + a2;
	//~ a1.print();
	//~ a2.print();  
	//~ a3.print();
	
	a3 = 10 + a1; 
	a1.print();  
	a3.print();
	
	//~ //[15,15,15,15,15]
	//~ cout << a1[0] << endl;
	//~ int val = a1[0];
	//~ a1[0] = 10;
	//~ a1(0,10);
	//&a1.data[0] = 10 ;
	return 0; 
}
