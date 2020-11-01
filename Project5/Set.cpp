//
// Created by Bradley Grose on 10/31/2020.
// Copyright (c) 2020 Bradley Grose. All rights reserved under MIT License.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include "Set.h"

using namespace std;



template <class T>
Set<T>::Set()
{
    size = 0;
    set_values = new T[size];
}

template <class T>
Set<T>::Set(int _size, T *_values)
{
    size = _size;
    set_values = _values;
}

template <class T>
Set<T>::Set(const Set<T>& _obj2)
{
    size = _obj2.size;
    set_values = new T[size];
    for(int i = 0; i < size; i++)
    {
        set_values[i] = _obj2.set_values[i];
    }

}

template <class T>
Set<T>::~Set()
{
    delete [] set_values;
}

template <class T>
Set<T> Set<T>::union(const Set<T>& _obj2)
{

}

template <class T>
Set<T> Set<T>::intersection(const Set<T>& _obj2)
{

}

template <class T>
bool Set<T>::subset(const Set<T>& _obj2)
{

}

template <class T>
Set<T> Set<T>::operator-(const Set<T>& _obj2)
{

}

template <class T>
Set<T> Set<T>::operator=(const Set<T>& _obj2)
{

}

template <class T>
void Set<T>::printCartesianProduct(const Set<T>& _obj2)
{

}

template <class T>
void Set<T>::print()
{

}




