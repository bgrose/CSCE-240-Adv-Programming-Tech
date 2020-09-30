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


private:
    float* arr;
    int size;

};