/*
 *   @author    Written By Bradley Grose
 *   @date      Completed On 9/9/2020 at 8:01PM
 *   @summary   This code must be able to take in 10 values and
 *              fill an array with those values. Then it will run using
 *              Bubble Sort in which it will sort it in increasing order.
 *              Then there is also a search function that searches for the
 *              index of a sent in value in the array. There is a print
 *              function that prints out each element with a space between.
 *   @input     The user must input 10 individual integer values when prompted
 *              by the terminal
 *   @output    The output will be the unsorted array, followed by the sorted
 *              array in increasing order. Then it will search for the value 1 and
 *              print out where it is found, if not, it will print out a not found message.
 *              Then it does the same thing for 99
 *              The format for array print out is a space between each element.
 *   @other     I added a sort function using call by reference to do the swap for bubble sort
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//Class Definition
void mySort(int arr[], int size);

int search(int arr[], int size, int element);

void readData(int arr[], int size);

void printData(int arr[], int size);

void swap(int *left, int *right);


//Main method provided by instructor

int main(int argc, char **argv) {
    int data[10] = {0};

    readData(data, 10);
    printData(data, 10);
    mySort(data, 10);
    printData(data, 10);
    int indexFound = -999;
    indexFound = search(data, 10, 1);
    if (indexFound != -1) {
        cout << "The number 1 was found at index: " << indexFound << endl;
    } else {
        cout << "The number 1 was not found" << endl;
    }

    indexFound = search(data, 10, 99);
    if (indexFound != -1) {
        cout << "The number 99 was found at index: " << indexFound << endl;
    } else {
        cout << "The number 99 was not found" << endl;
    }

    return 0;
}


/* @summary     Uses bubble sort to sort the array in increasing order
 * @param       int arr[] - Array of Values
 * @param       int size - Size of Array
 * @return      None
 */
void mySort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

/* @summary     Searches for a given value in the array and returns the location
 * @param       int arr[] - Array of Values
 * @param       int size - Size of Array
 * @param       int element - Element to search for
 * @return      Index of Element or -1 if not found
 */
int search(int arr[], int size, int element) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

/* @summary     This will have the user input 10 values
 * @param       int arr[] - Array of Values
 * @param       int size - Size of Array
 * @return      None.
 */
void readData(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter Element " << i + 1 << " of " << size << "\t";
        cin >> arr[i];
    }
}

/* @summary     Prints out the array with a space inbetween each value
 * @param       int arr[] - Array of Values
 * @param       int size - Size of Array
 * @return      None.
 */
void printData(int arr[], int size) {
    cout << "\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

/* @summary     Swaps value for Bubble Sort
 * @param       int *low - Value from lower index
 * @param       int *high - Value from higher index
 * @return      None.
 */
void swap(int *low, int *high) {
    int temp = *low;
    *low = *high;
    *high = temp;
}

