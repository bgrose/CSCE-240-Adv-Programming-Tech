#include "Set.h"
#include "Set.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing default constructor and printing NULL set (should print NULL)" << endl; 
	Set<int> s1;
	s1.print(); 
	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing alt constructor and printing non-null set (should print 1 2 3)" << endl; 
	int * data; 
	data = new int[3]; 
	for(int i = 0; i < 3; i++) data[i] = i+1;
	Set<int> s2(3,data);
	s2.print(); 
	delete [] data;
	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing alt constructor with other data type and printing non-null set (should print a b c)" << endl; 
	char * data2; 
	data2 = new char[3]; 
	for(int i = 0; i < 3; i++)
	{
		if(i ==0) data2[i] = 'a';
		else if(i ==1) data2[i] = 'b';
		else data2[i] = 'c';
	}
	Set<char> s3(3,data2);
	s3.print(); 
	delete [] data2;
	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing copy constructor  and printing non-null set (should print a b c)" << endl; 
	Set<char> s4(s3);
	s4.print(); 
	
	
	return 0;
}


