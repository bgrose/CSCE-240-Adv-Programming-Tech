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
	size = obj2.getSize(); 
	data = new int[size]; 
	for(int i = 0; i < size; i++)
	{
		data[i] = obj2.getData()[i]; 
	}
	
} //Copy constructor 

intArray::~intArray()
{
	delete [] data;
} //Destructor


intArray intArray::operator+(intArray& obj2) const
{
	int new_size = size+obj2.getSize(); 
	intArray temp(new_size, 0);
	for(int i = 0; i < new_size; i++)
	{
		if( i < size)
		{
			temp[i] = data[i];
		}
		else
		{
			temp[i] = obj2[i-size];
		}
	}
	return temp; 
} //a1 = a2 + a3

intArray& intArray::operator=(intArray obj2)
{
	delete [] data; 
	size = obj2.getSize();
	data = new int[size]; 
	for(int i = 0; i < size; i++)
	{
		data[i] = obj2[i];
	}
	return *this; 
}//a1.operator=(a2); 

int intArray::operator[](int index) const
{
	return data[index]; 
		
}


int& intArray::operator[](int index)
{
	return data[index];
}

intArray operator+(int val, intArray& rhs)
{
	intArray temp(rhs); //[5,5,5,5,5]
	
	for(int i = 0; i < rhs.size; i++)
	{
		temp[i] += val;
	}
	
	return temp; 
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

 
