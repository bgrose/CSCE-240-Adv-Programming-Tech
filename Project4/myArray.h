/*
 *   @author      Written By Bradley Grose
 *   @date        Completed On 9/24/2020 at 4:00PM
 *   @summary     Header for myArray
 *   @other       None.
 */

#include <iostream>
using namespace std;

class myArray {
public:
    myArray();
    myArray(int,float);
    myArray(float*, int);
    ~myArray();

    void insert(int,float);
    void remove(int);
    float get(int);
    void clear();
    int find(float);
    bool equals(myArray&);
    void init();
    void print();

    //Project 5 Additions
    bool operator!=(myArray&);
    float operator[](int);
    void operator()(int, float);
    const myArray& operator=(myArray)
    const myArray operator+(myArray)
    void operator+=(myArray&);
    friend istream& operator>>(istream&, myArray&);
    friend ostream& operator<<(ostream&, myArray&);

private:
    float* arr;
    int size;

};