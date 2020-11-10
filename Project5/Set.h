/*
 * Written By Bradley Grose
 */

#ifndef SET
#define SET
#include <iostream>

using namespace std;

template <class T>
class Set {
    public:
        Set();
        Set(int,T*);
        Set(const Set<T>&);
        ~Set()s ;

        Set<T> myUnion(const Set<T>& _obj2);
        Set<T> intersection(const Set<T>& _obj2);
        bool subset(const Set<T>& _obj2);
        Set<T> operator-(const Set<T>& _obj2);
        Set<T> operator=(const Set<T>& _obj2);
        void printCartesianProduct(const Set<T>& _obj2);
        void print();
        void append(T);

    private:
        T* set_values;
        int size;
};

#endif
