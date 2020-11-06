#include "Set.h"
#include "Set.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	
	Set<int> s1;
	s1.print(); 
	int * data; 
	data = new int[3]; 
	for(int i = 0; i < 3; i++) data[i] = i+1;
	Set<int> s2(3,data);
	delete [] data;
	data = new int[3]; 
	for(int i = 0; i < 3; i++)
	{
		if(i ==0) data[i] = 1;
		else if(i ==1) data[i] = 3;
		else data[i] = 5;
	}
	Set<int> s3(3,data);
	s3.print();
	delete [] data;
	
	Set<int> s4; 

	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing myUnion of NULL and 1,2,3 (should print {1, 2, 3})" << endl; 
	s4 = s1.myUnion(s2);
	s4.print();
	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing myUnion of 1,3,5 and 1,2,3 (should print {1, 2, 3, 5} in any order)" << endl; 
	s4 = s3.myUnion(s2);
	s4.print();

	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing intersection of NULL and 1,2,3 (should print NULL)" << endl;
	s4 = s1.intersection(s2);
	s4.print();
	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing intersection of 1,3,5 and 1,2,3 (should print {1, 3} in any order)" << endl;

	s4 = s3.intersection(s2);
	s4.print();


	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing operator- of 1,3,5 - 1,2,3 (should print {5})" << endl; 
	s4 = s3 - s2;
	s4.print();
	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing operator- of 1,2,3 - 1,3,5 (should print {2})" << endl; 
	s4 = s2 - s3;
	s4.print();


	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing cartesian product of 1,2,3 and 1,3,5 (should print {1,1},{1,3}, {1,5}, {2,1}, {2,3}, {2,5}, {3,1}, {3,3}, {3,5})" << endl; 
	s2.printCartesianProduct(s3);
	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing subset (should return True) " << endl; 
	bool output = s2.subset(s2); 
	cout << output << endl;
	
	cout << "-------------------------------------------------------------------------------------------------" << endl; 
	cout << "Testing subset (should return False) " << endl; 
	output = s2.subset(s3); 
	cout << output << endl;
	
	return 0;
}



/*

myUnion(Set<T> set2) : 
{1,2,3} and {1,4} -> {1,2,3,4}
{1,3,5} and {2,5} -> {1,3,5,2}
Set<T> ret(*this); 
loop through set2 j = 0 -> set2.size
	//add in values that are not already in ret 
	loop through ret i=0 -> ret.size
		if ret[i] == set2[j] flag = true;

intersection(Set<T> set2)
{1,2,3} and {1,4} -> {1}
int ret_size = 0;
T* ret_values = new T[0]; 
loop this i= 0 -> this.size 
     loop set2 j = 0 -> set2.size
	if set_values[i] == set2.set_values[j] 
		ret_size++
		//add the value (set_values[i]) to ret_values
		1 - save the old contents with temp *
		2 - resize ( = new T[ret_size])
		3 - copy over old contents from temp * 
		4 - add new element
	
Set<T> ret(ret_size, ret_values);

intersection(Set<T> set2)
{1,2,3} and {1,4} -> {1}
Set<T> ret;
loop this i= 0 -> this.size 
     loop set2 j = 0 -> set2.size
	if set_values[i] == set2.set_values[j] 
		ret.append(set_values[i])
	



*/


