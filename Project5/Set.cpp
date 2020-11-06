/*
 *   @author    Written By Bradley Grose
 *   @date      Completed 11/5/2020 @ 9 PM
 *   @summary   This project will make a Set object what can do many different features, such as 3 different
 *              ways of making an Set, a destructor, A function that finds the union without repeated values,
 *              a boolean check if a set is a subset of another, a subtraction and equals operator, and the ability
 *              to print out in Cartesian form and normal set form.
 *   @input     The inputs are based on the needed values for functions described in each functions comment block
 *              header.
 *   @output    The output this file has is returns in various functions described below
 *              that can be used in tester mains.
 *   @other     There is no main class in this as it was run using the test mains
 *              provided by the instructor (Main1, Main2, Main3).
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "Set.h"

using namespace std;

/*
 *  @summary    Default Constructor, Creates Object Size 0 with no values.
 *  @input      None.
 *  @output     Creates Set Object.
 *  @other      None.
 */
template<class T>
Set<T>::Set() {
    size = 0;
    set_values = new T[size];
}


/*
 *  @summary    Creates a Set object with passed in size and sets the pointer array.
 *  @input      _size       Size of new Object.
 *              *_values    Pointer array with values for object.
 *  @output     Creates an object.
 *  @other      None.
 */
template<class T>
Set<T>::Set(int _size, T *_values) {
    size = _size;
    set_values = new T[size];
    for (int i = 0; i < size; i++) {
        set_values[i] = _values[i];
    }
}

/*
 *  @summary    Creates a Set object that copies in passed object.
 *  @input      _obj2   The object to be copied for new object.
 *  @output     Creates an object.
 *  @other      None.
 */
template<class T>
Set<T>::Set(const Set<T> &_obj2) {
    size = _obj2.size;
    set_values = new T[size];
    for (int i = 0; i < size; i++) {
        set_values[i] = _obj2.set_values[i];
    }
}

/*
 *  @summary    Destructor for Set Object.
 *  @input      None.
 *  @output     None.
 *  @other      None.
 */
template<class T>
Set<T>::~Set() {
    delete[] set_values;
}

/*
 *  @summary    This class will find the similarities in sets and return that as a set.
 *  @input      _obj2   Set to compare against when making intersection.
 *  @output     Returns a Set<T> that is the common values between array.
 *  @other      None.
 */
template<class T>
Set<T> Set<T>::intersection(const Set<T> &_obj2) {
    Set<T> temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < _obj2.size; j++) {
            if (set_values[i] == _obj2.set_values[j])
                temp.append(set_values[i]);
        }
    }
    return temp;
}

/*
 *  @summary    This method will return is all of the object passed in is found in the compared against
 *              Set object.
 *  @input      _obj2   Set to compare against when checking for subset.
 *  @output     Returns a boolean if subset is true.
 *  @other      None.
 */
template<class T>
bool Set<T>::subset(const Set<T> &_obj2) {
    for (int i = 0; i < size; i++) {
        bool found = false;
        for (int j = 0; j < _obj2.size; j++)
            if (set_values[i] == _obj2.set_values[j])
                found = true;
        if (!found) {
            cout << "false" << endl;
            return false;
        }
    }
    cout << "true" << endl;
    return true;
}

/*
 *  @summary    This is a subtraction operator for sets. It will subtract the values found
 *              in object 2 that are also found in object 1 from object 1.
 *  @input      _obj2   Set to compare against when finding what to subtract.
 *  @output     Returns a Set<T> that is the result of the subtraction.
 *  @other      None.
 */
template<class T>
Set<T> Set<T>::operator-(const Set<T> &_obj2) {
    Set<T> temp;
    for (int i = 0; i < size; i++) {
        bool add = true;
        for (int j = 0; j < _obj2.size; j++) {
            if (set_values[i] == _obj2.set_values[j]) {
                add = false;
            }
        }
        if (add) {
            temp.append(set_values[i]);
        }
    }
    return temp;
}

/*
 *  @summary    Equals operator that copies the right hand side to the left hand.
 *  @input      _obj2   Set to compare against when making the copy of it.
 *  @output     Returns a Set<T> that is the copy of _obj2.
 *  @other      None.
 */
template<class T>
Set<T> Set<T>::operator=(const Set<T> &_obj2) {
    Set<T> temp(_obj2);
    delete[] set_values;
    size = temp.size;
    T *newVals;
    newVals = new T[size];
    for (int i = 0; i < size; i++) {
        newVals[i] = temp.set_values[i];
    }
    set_values = newVals;
    return *this;
}

/*
 *  @summary    This prints out the Cartesian Product where it creates the pairings
 *              between both sets.
 *  @input      _obj2   Set to use when making the Cartesian Product.
 *  @output     No Return, Prints out Cartesian Product.
 *  @other      None.
 */
template<class T>
void Set<T>::printCartesianProduct(const Set<T> &_obj2) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < _obj2.size; j++) {
            cout << "{" << set_values[i] << "," << _obj2.set_values[j] << "}, ";
        }
    }
    cout << endl;
}

/*
 *  @summary    Prints out the Set in a set format.
 *  @input      None.
 *  @output     None.
 *  @other      None.
 */
template<class T>
void Set<T>::print() {
    if (size == 0) {
        cout << "NULL" << endl;
    } else {
        cout << "{";
        for (int i = 0; i < size - 1; i++) {
            cout << set_values[i] << ",";
        }
        cout << set_values[size - 1] << "}" << endl;
    }
}

/*
 *  @summary    This function will return the combined union of the two sets.
 *  @input      _obj2   Set to be combined with the calling set.
 *  @output     Returns a Set<T> that is the combined union of the two sets.
 *  @other      None.
 */
template<class T>
Set<T> Set<T>::myUnion(const Set<T> &_obj2) {
    Set<T> temp(_obj2);
    for (int i = 0; i < _obj2.size - 1; i++) {
        temp.set_values[i] = _obj2.set_values[i];
    }
    for (int i = 0; i < size; i++) {
        bool found = false;
        for (int j = 0; j < _obj2.size; j++) {
            if (set_values[i] == _obj2.set_values[j])
                found = true;
        }
        if (!found)
            temp.append(set_values[i]);
    }
    return temp;
}

/*
 *  @summary    This function will add a value to a set value
 *  @input      value   T value that is being added to the set
 *  @output     None.
 *  @other      None.
 */
template<class T>
void Set<T>::append(T value) {
    T *temp;
    temp = set_values;
    set_values = new T[size + 1];

    for (int i = 0; i < size; i++) {
        set_values[i] = temp[i];
    }
    set_values[size] = value;
    size = size + 1;
    delete[] temp;
}