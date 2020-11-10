/* Eleanor Barry
* 1:30pm 4 November 2020
*
*
*/

#include <iostream>
#include <vector>
using namespace std;

vector<double> store;

class Complex {

    // all private variables of the class
private:
    double real;
    double imaginary;
    // all public variables and methods of the class
public:

    friend void storeNum(int, double);

    Complex() {
        real = 0.0;
        imaginary = 0.0;
    }
    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }
    // returns the real value of the number
    double get_real() {
        return real;
    }
    // returns the imaginary value of the number
    double get_imaginary() {
        return imaginary;
    }
    // sets the real value of the number
    void set_real(double r) {
        real = r;
    }
    // sets the imaginary vlue of the number
    void set_imaginary(double i) {
        imaginary = i;
    }
    // overloading operator that subtracts two complex numbers
    Complex operator-(Complex const &obj){
        Complex _object;
        _object.real = real - obj.real;
        _object.imaginary = imaginary - obj.imaginary;
        return _object;
    }
    // overloading operator that checks if two complex numbers are equal
    bool operator==(Complex const &obj){
        Complex _object;
        if (real == obj.real){
            if (imaginary == obj.imaginary) {
                return true;
            }else {
                return false;
            }
        }else {
            return false;
        }
    }
    // friend function
    friend void storeNum();
};


void storeNum(int index, double val) {
    store.push_back(val);
}


int main() {
    // variables
    double num1real;
    double num1im;
    double num2real;
    double num2im;
    //  prints out prompts and stores numbers
    cout << "Enter your first complex number:" << endl;
    cin >> num1real;
    cin >> num1im;
    storeNum(0, num1real);
    storeNum(1, num1im);
    Complex num1(num1real, num1im);
    cout << "The first complex number: " << num1.get_real() << " + " << num1.get_imaginary() << "i" << endl;
    cout << "Enter your second complex number:" << endl;
    cin >> num2real;
    cin >> num2im;
    Complex num2(num2real, num2im);
    storeNum(0, num2real);
    storeNum(1, num2im);
    cout << "The second complex number: " << num2.get_real() << " + " << num2.get_imaginary() << "i" << endl;
    Complex newNum = num1 - num2;
    cout << "First number - Second number: " << newNum.get_real() << " + " << newNum.get_imaginary() << "i" << endl;
    string equalRet;
    if (num1 == num2) {
        equalRet = "true";
    }else {
        equalRet = "false";
    }
    cout << "The first and second numbers are equal: " << equalRet << endl;
    cout << "The value that is stored in index [0] of the vector: " << store.at(0) << endl;
    cout << "The value that is stored in index [1] of the vector: " << store.at(1) << endl;
    cout << "The value that is stored in index [2] of the vector: " << store.at(2) << endl;
    cout << "The value that is stored in index [3] of the vector: " << store.at(3) << endl;
    return 0;
}

