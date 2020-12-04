#include <cstdio>
#include <iostream>
//#include <stdlib.h>
#include <list>

using namespace std;

/*
 * List is a type of sequential containers
 * Others: vector and deque (double ended queue) 
 * 
 * */

int main (int argc, char **argv)
{ 

	int size = 10;
	list <int> cList; 
	for(int i = 0; i < size; i++)
	{
		cList.push_back(i);
	}

	size = cList.size();
	list<int>::iterator Position;
	
	Position = cList.begin();
	advance(Position, 3); //not part of the container class, 
						  //comes in as part of the iterator library (in std)
	cList.insert(Position,0);
	size = cList.size();
	

	size = cList.size();

	Position = cList.begin();
		
	advance(Position, 3);
	cList.erase(Position);
	size = cList.size();

	
    return 0;
}
