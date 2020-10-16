#include "myArray.h" 

myArray::myArray()
{
	size = 0; 
	arr = new float[size];
}
 
myArray::myArray(int _size, float _num)
{
	size = _size; 
	arr = new float[_size]; 
	for(int i = 0; i < size; i++)
	{
		arr[i] = _num;
	}
}
myArray::myArray(float* _arr, int _size)
{
	size = _size; 
	arr = new float[_size]; 
	for(int i = 0; i < size; i++)
	{
		arr[i] = _arr[i];
	}
}

myArray::myArray(const myArray& obj2)
{
	size = obj2.size; 
	arr = new float[size]; 
	for(int i = 0; i < size; i++) 
	{
		arr[i] = obj2.arr[i]; 
	}
}


myArray::~myArray()
{
	delete [] arr;
}
		
void myArray::insert(int _index,float _num)
{
	float *temp; 
	temp = arr;
	arr= new float[size+1];
	for(int i = 0; i < _index; i++) 
	{
		arr[i] = temp[i]; 
	}
	arr[_index] = _num; 
	for(int i = _index+1; i < size+1; i++) 
	{
		arr[i] = temp[i-1]; 
	}
	size = size +1;
	delete [] temp;
}
void myArray::remove(int _index)
{
	float *temp; 
	temp = arr; 
	arr = new float[size-1]; 
	for(int i = 0; i < size-1; i++) 
	{
		if(i != _index && i < _index)
		{
			arr[i] = temp[i]; 
		}
		else
		{
			arr[i] = temp[i+1]; 
		}
	}
	delete [] temp;
	size = size -1;
}

float myArray::get(int _index)
{
	if(_index >=0 && _index < size)
	{
		return arr[_index];
	}
	cout << "Error, index out of bounds" << endl;
	return -1;
}

void myArray::clear()
{
	delete [] arr;
	arr = new float[0];
	size = 0;
} 

int myArray::find(float _num)
{
	int ret = -1; 
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == _num) 
		{
			ret = i; 
			break;
		}
	}
	return ret;
}

bool myArray::equals(myArray& obj2)
{
	bool ret = true; 
	for(int i = 0; i < size; i++)
	{
		if(arr[i] != obj2.arr[i]) 
		{
			ret = false; 
			break;
		}
	}
	return ret;
}
 
void myArray::init()
{
	cout << "Enter " << size << " elements." << endl; 
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i]; 
	}
} 

void myArray::print()
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " "; 
	}
	cout << endl; 
}
