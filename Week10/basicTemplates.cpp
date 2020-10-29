

#include <cstdlib>
#include <iostream>


using namespace std;

//~ int add(int,int); 
//~ double add(double, double);
//double add(double, int);

template <class T> 
T add(T,T);

template <>
char add(char,char);

int main(int argc, char** argv) 
{
	int a, b, c; 
	a = b = c = 3;
	double d1, d2, d3; 
	d3 = d1 = d2 = 4.5;
	
	c = add(a,b);
	d3 = add(d1,d2);
	d3 = add(d1,d2);
	
	char c1,c2,c3; 
	c3 = add(c1,c2);
   
    return 0;
}
template <class T> 
T add(T a,T b)
{
	static int i = 0;
	i++;
	cout << "Value of i: " << i << endl;
	return a+b;
}
template <>
char add(char a,char b)
{
	cout << "Hello!" << endl; 
	return '\0';
}


