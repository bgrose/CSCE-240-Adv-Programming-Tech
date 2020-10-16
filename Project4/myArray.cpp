/*
 *   @author    Written By Bradley Grose
 *   @date      Completed 10/16/2020 at 1PM
 *   @summary   This code makes a functionality that mimics an
 *              array list that could be found in Java. This allows
 *              for the user to create array list, change size, add
 *              elements, remove elements, find elements, get a value
 *              at a set index, set values to an array, and print out
 *              the whole array. It also now has operator overloaders
 *              and ostream/istream so the user can take advantage of the
 *              functions of cout, cin, +, +=, [], (), !=.
 *   @input     The input from this is dependant one what class is being
 *              called by the main class. The only input done in this class
 *              is in init, it takes the values to fill array. In addition it can
 *              be used in cin and istream to take in values.
 *   @output    The only output is in a few classes. For example, find returns
 *              the index for a value. For get, it returns the float value for the
 *              index sent in. For equals it returns true or false if equal. The
 *              other output is the cout's used to print out the array. In addition, the
 *              ostream now allows the user to cout an object.
 *   @other     There is no main class in this as it was run using the test mains
 *              provided by the instructor (Main1, Main2, Main3).
 */
#include <iostream>
#include "myArray.h"

using namespace std;

/*
 *  @summary    Creates a blank array of size 0.
 *  @input      None.
 *  @output     None.
 *  @other      None.
 */
myArray::myArray() {
    size = 0;
    arr = new float[size];
}

/*
 *  @summary    Creates an array with a size taken in and fills all values
 *              with the number sent in.
 *  @input      _size   an integer value that creates the size of the array.
 *  @input      num     a float value that will be used to fill all spots in array.
 *  @output     None.
 *  @other      None.
 */
myArray::myArray(int _size, float _num) {
    size = _size;
    arr = new float[_size];
    for (int i = 0; i < size; i++) {
        arr[i] = _num;
    }
}

/*
 *  @summary    Creates an array by copying another array and resizing
 *              the array.
 *  @input      *_arr   Takes in a float array that will be used to copy
 *              to create a new array.
 *  @input      _size   an integer that will be used as the new size of array.
 *  @output     None.
 *  @other      None.
 */
myArray::myArray(float *_arr, int _size) {
    size = _size;
    arr = new float[_size];
    for (int i = 0; i < size; i++) {
        arr[i] = _arr[i];
    }
}

/*
 *  @summary    Creates a constructor that copies the array passed in.
 *  @input      myArray& obj2 is the array to be copied over.
 *  @output     None.
 *  @other      None.
 */
myArray::myArray(const myArray &obj2) {
    size = obj2.size;
    arr = new float[size];
    for (int i = 0; i < size; i++) {
        arr[i] = obj2.arr[i];
    }
}

/*
 *  @summary    Destructor for myArray.
 *  @input      None.
 *  @output     None.
 *  @other      None.
 */
myArray::~myArray() {
    delete[] arr;
}

/*
 *  @summary    Inserts a value at a set index spot and resized the array.
 *  @input      index   integer value that is the index for new element.
 *  @input      num     float value to be added at that index.
 *  @output     None.
 *  @other      None.
 */
void myArray::insert(int _index, float _num) {
    float *temp;
    temp = arr;
    arr = new float[size + 1];
    for (int i = 0; i < _index; i++) {
        arr[i] = temp[i];
    }
    arr[_index] = _num;
    for (int i = _index + 1; i < size + 1; i++) {
        arr[i] = temp[i - 1];
    }
    size = size + 1;
    delete[] temp;
}

/*
 *  @summary    Removes a value at an taken in index and resizes the array.
 *  @input      index   an integer value for where the object should be removed.
 *  @output     None.
 *  @other      None.
 */
void myArray::remove(int _index) {
    float *temp;
    temp = arr;
    arr = new float[size - 1];
    for (int i = 0; i < size - 1; i++) {
        if (i != _index && i < _index) {
            arr[i] = temp[i];
        } else {
            arr[i] = temp[i + 1];
        }
    }
    delete[] temp;
    size = size - 1;
}

/*
 *  @summary    Returns the value for a taken in index for the array.
 *  @input      index   the index that will return the value there.
 *  @output     This will return -1 if it is out of bound for index, if it
 *              is found then it will return the float for the value at index.
 *  @other      None.
 */
float myArray::get(int index) const {
    // Index Out of Range, returns false
    if ((index < 0) || (index >= size)) {
        cout << "Invalid index." << endl;
        return -1;
    }
        // Returns Values
    else {
        return arr[index];
    }
}

/*
 *  @summary    Clears the array and set the size back to 0.
 *  @input      None.
 *  @output     None.
 *  @other      None.
 */
void myArray::clear() {
    delete[] arr;
    arr = new float[0];
    size = 0;
}

/*
 *  @summary    This class will find the index of a taken in float and return the
 *              index if found.
 *  @input      num     takes in the float that will be searched for.
 *  @output     returns -1 if the float is not found, if found will return the
 *              index where it was found in the array.
 *  @other      None.
 */
int myArray::find(float num) const {
    int ret = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            ret = i;
            break;
        }
    }
    return ret;
}

/*
 *  @summary    This class checks to see if two array objects are equal.
 *  @input      &obj2   This is a myArray object that is taken in to compare.
 *  @output     returns a boolean whether the current array and intake one
 *              are the same in size and values.
 *  @other      None.
 */
bool myArray::equals(myArray &obj2) const {
    bool ret = true;
    for (int i = 0; i < size; i++) {
        if (arr[i] != obj2.arr[i]) {
            ret = false;
            break;
        }
    }
    return ret;
}

/*
 *  @summary    This class allows the user to input or file redirect values into
 *              a myArray.
 *  @input      The user will input x number of values.
 *  @output     None.
 *  @other      None.
 */
void myArray::init() {
    cout << "Please Enter the elements to fill the area of size " << size << endl;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

/*
 *  @summary    Prints out all elements of the array separated by a space.
 *  @input      None.
 *  @output     Prints out the array values using standard out.
 *  @other      None.
 */
void myArray::print() const {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
 *  @summary    Checks to see if two myArray objects are equal when
 *              using operator overloading.
 *  @input      &obj2 is a myArray object that is passed in by reference.
 *  @output     returns a boolean true or false if they are not equal.
 *  @other      None.
 */
bool myArray::operator!=(myArray &obj2) {
    if (size != obj2.size) {
        return true;
    }

    for (int i = 0; i < size; i++) {
        if (get(i) != obj2.arr[i]) {
            return true;
        }
    }

    return false; //No Mismatch Found

}

/*
 *  @summary    This operator overloaded allows the user to use [] to get an element
 *              to the array in object by simply using the object name.
 *  @input      index   the index value of where the object is located.
 *  @output     returns the object at index. If index does not exist, returns -1.
 *  @other      None.
 */
float myArray::operator[](int index) {
    if (index >= 0 && index < size)
        return arr[index];
    else
        cout << "index not found" << endl;
    return -1;
}

/*
 *  @summary    This function allows you to change a value of arr at a given point.
 *  @input      index   index to be altered.
 *  @input      num     value to be put at index.
 *  @output     None.
 *  @other      None.
 */
void myArray::operator()(int index, float num) {
    if (index >= 0 && index < size) {
        arr[index] = num;
    } else {
        cout << "index not found" << endl;
    }
}

/*
 *  @summary    This overloaded operator allows the user to set two object equal to
 *              the same values.
 *  @input      obj2    a constant myArray object that is what the object will be set equal to.
 *  @output     The return is an object the same as obj2.
 *  @other      None.
 */
myArray &myArray::operator=(const myArray obj2) {
    myArray temp(obj2);
    delete[] arr;
    size = temp.size;
    float *arrNew;
    arrNew = new float[size];
    for (int i = 0; i < size; i++) {
        arrNew[i] = temp[i];
    }
    arr = arrNew;
    return *this;
}

/*
 *  @summary    This overloaded operator allows the user to add the values of 2 of the same size
 *              objects together.
 *  @input      &obj2   constant myArray that will be added to the other myArray object.
 *  @output     returns the added together myArray object.
 *  @other      None.
 */
myArray myArray::operator+(const myArray &obj2) {
    myArray temp(size, 0);
    for (int i = 0; i < obj2.size; i++)
        temp.arr[i] = arr[i] + obj2.arr[i];
    return temp;
}

/*
 *  @summary    Overloaded operator that allows you to combine two objects together
 *  @input      &obj2   constant object that is the righthand side of expression
 *  @output     While there is no return, the lefthand side will be equal to the combined
 *              object.
 *  @other      None.
 */
void myArray::operator+=(const myArray &obj2) {
    int oldSize = size;
    size = oldSize + obj2.size;
    float *arrNew;
    arrNew = new float[size];
    for (int i = 0; i < oldSize; i++)
        arrNew[i] = arr[i];
    for (int i = oldSize; i < size; i++)
        arrNew[i] = obj2.arr[i - oldSize];
    delete[] arr;
    arr = arrNew;
}

/*
 *  @summary    Istream that allows the user to cin to an object
 *  @input      &in     values being used to cin to an object
 *  @input      &rhs    the object being filled by the cin
 *  @output     returns the stream of values
 *  @other      None.
 */
istream &operator>>(istream &in, myArray &rhs) {
    cout << "Please Enter the elements to fill the area of size " << rhs.size << endl;

    for (int i = 0; i < rhs.size; i++) {
        in >> rhs.arr[i];
    }
    return in;
}

/*
 *  @summary    Ostream that prints out the array using cout
 *  @input      &out    The ostream being used in the cout to print
 *  @input      &rhs    The object that will be printed
 *  @output     returns the ostream to print for the object.
 *  @other      None.
 */
ostream &operator<<(ostream &out, myArray &rhs) {
    if (rhs.size == 0) {
        out << "NULL";
    } else {
        for (int i = 0; i < rhs.size; i++) {
            out << rhs.arr[i] << " ";
        }
    }
    return out;
}
