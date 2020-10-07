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
    float get(int) const;
    void clear();
    int find(float) const;
    bool equals(myArray&) const;
    void init();
    void print() const;

    //Project 5 Additions
    bool operator!=(myArray&);
    float operator[](int);
    void operator()(int, float);
    myArray& operator=(myArray);
    myArray operator+(myArray&);
    void operator+=(myArray&);
    friend istream& operator>>(istream&, myArray&);
    friend ostream& operator<<(ostream&, myArray&);

private:
    float* arr;
    int size;

};