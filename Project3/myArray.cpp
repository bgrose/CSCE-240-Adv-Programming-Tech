/*
 *   @author    Written By Bradley Grose
 *   @date      Completed On 9/29/2020 at 9;42PM
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
 *   @other     There is no main class in this as i will copy and pasting the main
 *              class examples to test my code.
 */
#include <iostream>
#include "myArray.h"

using namespace std;

/*
 * Default Constructor
 */
myArray::myArray() {
    size = 0;
    arr = new float[size];
}

/*
 * Constructor for size and what to fill it with
 */
myArray::myArray(int _size, float num) {
    size = _size;
    arr = new float[size];
    for (int i = 0; i < size; i++) {
        arr[i] = num;
    }
}

/*
 * Copies Elements from the array
 */
myArray::myArray(float *_arr, int _size) {
    size = _size;
    arr = new float[size];
    for (int i = 0; i < size; i++) {
        arr[i] = _arr[i];
    }
}

/*
 * Destructor for the arr[]
 */
myArray::~myArray() {
    delete[] arr;
}

/*
 * Inserts an element at a set location and expands the array
 */
void myArray::insert(int index, float num) {
    if (index > size + 1) {
        cout << "Invalid Range" << endl;
    } else {
        for (int i = size + 1; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = num;
        size++;
    }
}

/*
 * Removes an element at a passed in index and shortens the array
 */
void myArray::remove(int index) {
    if (index > size - 1) {
        cout << "Index Out of Bounds" << endl;
    } else {
        bool removed = false;
        for (int i = 0; i < size - 1; i++) {
            if (index == i) {
                removed = true;
            }
            if (removed) {
                arr[i] = arr[i + 1];
            }
        }
        size--;
    }
}

/*
 * Gets the value at an index sent into the function
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
 * Clears out the whole array and resets it
 */
void myArray::clear() {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
    size = 0;
}

/*
 * Finds an element in the array and returns the index value for the wanted value
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
 * Checks if the arrays are equals to eachother
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
 * Collects the data for a new array by the user
 */
void myArray::init() {
    cout << "Please Enter the elements to fill the area of size " << size << endl;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

/*
 * Prints out the whole array
 */
void myArray::print() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}


