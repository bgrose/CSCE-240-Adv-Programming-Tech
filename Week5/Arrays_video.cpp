#include <cstdlib>
#include <iostream>


using namespace std;

const int COLS(5);

void print2DArray(int data[][COLS], int rows);

void printArray(int[],int);

int main (int argc, char **argv)
{   
	//declaring 1D array of size 5 and initilize the elements to 0
	int arr1[5] = {0};  
	//int arr1[5] = {0,1,0,0,0};
	//int arr1[5] = {10,10,10};
	
	//decalaring a 2D arry of size 5x2
	int arr2[5][2] = {0};
	
	//Printing the elements of an array 1D
	for(int i = 0; i < 5; i++)
	{
		cout << arr1[i] << " "; 
	}
	cout << endl;
	
	//Printing the elements of an array 2D
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	//cout << endl;
	
	//Setting the elements of an array 1D
	for(int i = 0; i < 5; i++)
	{
		//arr1[i] = i;
		cin >> arr1[i];
	}
	
	for(int i = 0; i < 5; i++)
	{
		cout << arr1[i] << " "; 
	}
	cout << endl;
	
	
	//Setting the element of an array 2D
	
	
	//Arrays in functions 1D. 
	printArray(arr1, size); 
	//Arrays in functions 2D
	print2DArray(arr2, rows);
	
	return 0;
}

void printArray(const int arr1[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr1[i] << " "; 
	}
	cout << endl;
	
}




