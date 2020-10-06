#include <iostream> 
#include <string>
using namespace std; 

//Let's make a linked list! 
struct node
{
	int data; 
	node *next;
	node *prev;
};  

//ifstream operator<<(node);
  
int main() 
{  
	node head;
	head.data = 10;
	node tail;
	tail.data = 100;
	head.next = &tail;
	tail.prev = &head;
	head.prev = &tail;
	tail.next = &head;
	cout << head.next->data << endl; //print value
    cout << head.next << endl; //print value

	
	return 0; 
}
