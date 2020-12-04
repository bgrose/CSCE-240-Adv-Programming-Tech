#include <cstdio>
#include <iostream>
//#include <stdlib.h>
#include <queue>


using namespace std;

/*
 * Priority queue is a container adapter, 
 * Also: stack...
 * 
 * */

int main (int argc, char **argv)
{ 
	priority_queue <int> test; 
    test.push(10); 
    test.push(30); 
	test.push(20); 
    test.push(5); 
    test.push(1); 
    
    cout << "Contents of test: " << endl;
    
    //Note: there is no way to iterate through a queue. 
    //This is restricted by its very nature
    //You must pop everything -- sounds funny right?
    //priority queues are not traditionally coded using a queue structure
    //Usually a heap is used -- which can be maintained within an array
    while (!test.empty()) 
    { 
        cout << test.top() << ' ' ; 
        test.pop(); 
    } 
    cout << endl; 
    
    //Notice the order. It is by default a max priority queue. 
    //Now size is 0, Problem?
    
    //To make it a min: 
    priority_queue <int, vector<int>, greater<int>> min; //<datatype, container type and comparator> 
    min.push(10); 
    min.push(30); 
    min.push(20); 
    min.push(5); 
    min.push(1); 
    
    cout << "Contents of min: " << endl;
	while (!min.empty()) 
    { 
        cout << min.top() << ' ' ; 
        min.pop(); 
    } 
    cout << endl; 
    return 0;
}
