#include <cstdlib>
#include <iostream>
#include <string>
#include "myArray.h"
#include "myArray.cpp"


int main(int argc, char** argv) 
{
	myArray<float> a1(5,1.5); 
	a1.print();
	
	myArray<char> a2(5,'c'); 
	a2.print();
	
	myArray<float> a3(5,1.5);
	
	//a1.insert(0,1.5);
	//a1.insert(0,1.5);
	
	//cin >> a1 >> a2; 
	return 0; 
}
