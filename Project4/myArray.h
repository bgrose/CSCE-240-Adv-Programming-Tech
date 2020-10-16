/*
 *   @author      Written By Bradley Grose
 *   @date        Completed On 9/24/2020 at 4:00PM
 *   @summary     Header for myArray
 *   @other       None.
 */

#include <iostream>
using namespace std;

class myArray {
    friend istream& operator>>(istream&, myArray&);
    friend ostream& operator<<(ostream&, myArray&);
public:
    myArray();
    myArray(int,float);
    myArray(float*, int);
    myArray(const myArray&);
    ~myArray();

    void insert(int,float);
    void remove(int);

    float get(int) const;
    void clear();

    int find(float) const;
    bool equals(myArray&) const;

    void init();
    void print() const;

    float operator[](int);
    void operator()(int, float);
    bool operator!=(myArray&);
    myArray& operator=(const myArray);
    myArray operator+(const myArray&);
    void operator+=(const myArray&);

private:
    float* arr;
    int size;

};