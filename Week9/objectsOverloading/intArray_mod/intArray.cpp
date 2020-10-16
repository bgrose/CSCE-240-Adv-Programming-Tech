#include "intArray.h"

intArray::intArray(){
	data = new int[0];
	size = 0;
} //Default

//init data to _size and set all values to _val
intArray::intArray(int _size, int _val)
{
	data = new int[_size]; 
	for(int i = 0; i < _size; i++) 
	{
		data[i] = _val;
	}
	size = _size;
} //Alternate constructor

intArray::intArray(const intArray& obj2)
{
	
	
} //Copy constructor 

intArray::~intArray()
{
	delete [] data;
} //Destructor


intArray intArray::operator+(intArray& obj2) const
{
	
}

intArray& intArray::operator=(intArray obj2)
{
	
}

int intArray::operator[](int index) const
{
	
}


int& intArray::operator[](int index)
{
	
}

intArray operator+(int val, intArray& rhs)
{
	
}

void intArray::print() const
{
	for(int i = 0 ; i < size; i++) 
	{
		cout << data[i] << " ";
	}
	cout << endl;
}


int* intArray::getData() const
{
	return data;
} 

int intArray::getSize() const
{
	return size; 
}

void intArray::setData(int* _data)
{
	data = _data;
}

void intArray::setSize(int _size)
{
	if(_size > 0) size = _size;
	else size = 0; //raise error/warning
}

 
