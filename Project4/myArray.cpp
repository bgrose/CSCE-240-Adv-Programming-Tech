/*
 *   @author    Written By Bradley Grose
 *   @date
 *   @summary   This code makes a functionality that mimics an
 *              array list that could be found in Java. This allows
 *              for the user to create array list, change size, add
 *              elements, remove elements, find elements, get a value
 *              at a set index, set values to an array, and print out
 *              the whole array.
 *   @input     The input from this is dependant one what class is being
 *              called by the main class. The only input done in this class
 *              is in init, it takes the values to fill array
 *   @output    The only output is in a few classes. For example, find returns
 *              the index for a value. For get, it returns the float value for the
 *              index sent in. For equals it returns true or false if equal. The
 *              only other output is the cout's used to print out the array.
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
myArray::myArray(int _size, float num) {
    size = _size;
    arr = new float[size];
    for (int i = 0; i < size; i++) {
        arr[i] = num;
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
    arr = new float[size];
    for (int i = 0; i < size; i++) {
        arr[i] = _arr[i];
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
void myArray::insert(int index, float num) {

    float *newArray;
    newArray = new float[size + 1];

    if (index > size + 1) {
        cout << "Invalid Range" << endl;
    } else {
        for (int i = 0; i < size + 1; i++) {
            if (i < index) {
                newArray[i] = arr[i];
            } else if (i == index) {
                newArray[i] = num;
            } else {
                newArray[i] = arr[i - 1];
            }
        }
        size++;
        delete[] arr;
        arr = newArray;
    }
}

/*
 *  @summary    Removes a value at an taken in index and resizes the array.
 *  @input      index   an integer value for where the object should be removed.
 *  @output     None.
 *  @other      None.
 */
void myArray::remove(int index) {

    if (index > size - 1) {
        cout << "Invalid Range" << endl;
    } else {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
}

/*
 *  @summary    Returns the value for a taken in index for the array.
 *  @input      index   the index that will return the value there.
 *  @output     This will return -1 if it is out of bound for index, if it
 *              is found then it will return the float for the value at index.
 *  @other      None.
 */
float myArray::get(int index) {
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
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
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
int myArray::find(float num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return -1; //Not Found
}

/*
 *  @summary    This class checks to see if two array objects are equal.
 *  @input      &obj2   This is a myArray object that is taken in to compare.
 *  @output     returns a boolean whether the current array and intake one
 *              are the same in size and values.
 *  @other      None.
 */
bool myArray::equals(myArray &obj2) {
    if (size != obj2.size) {
        return false;
    }

    for (int i = 0; i < size; i++) {
        if (get(i) != obj2.get(i)) {
            return false;
        }
    }

    return true; //No Mismatch Found
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
void myArray::print() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
