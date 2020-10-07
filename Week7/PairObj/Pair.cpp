#include "Pair.h"

Pair::Pair()
{
	data[0] = 0; 
	data[1] = 0;
}

Pair::Pair(int _one, int _two)
{
	data[0] = _one; 
	data[1] = _two;
}
Pair& Pair::operator=(Pair obj2) {
    data[0] = obj2.data[0];
    data[1] = obj2.data[1];

    return *this;
}
Pair Pair::operator+(Pair& _obj2)
{
    int newOne, newTwo;
    newOne = data[0] + _obj2.data[0];
    newTwo = data[1] + _obj2.data[1];
    Pair temp(newOne, newTwo);

    return temp;
}

ostream& operator<<(ostream& os, Pair& rhs)
{
    os << rhs.data[0] << ", " << rhs.data[1];
    return os;
}

istream& operator>>(istream& is, Pair& rhs)
{
    cout << "Input two numbers: " << endl;
    is >> rhs.data[0] >> rhs.data[1];
    return is;
}
		
void Pair::print() const
{
	cout << "Element 1: " << data[0] << endl; 
	cout << "Element 2: " << data[1] << endl; 
}

Pair Pair::operator-()
{
    int newOne, newTwo;
    newOne = data[0] * -1;
    newTwo = data[1] * -1;
    Pair temp(newOne, newTwo);
    return temp;
}
