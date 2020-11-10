/* Eleanor Barry
* 1:30pm 4 November 2020
*
*
*/

#include <iostream>
#include <vector>
using namespace std;


class Complex {
    // all private variables of the class
private:
    double real;
    double imaginary;
    // all public variables and methods of the class
public:
    vector<double> store;
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
        _object.real = _object.real + obj.real;
        _object.imaginary = _object.imaginary + obj.imaginary;
        return _object;
    }
    // overloading operator that checks if two complex numbers are equal
    bool operator==(Complex const &obj){
        Complex _object;
        if (_object.getReal() == obj.getReal()){
            if (_object.maginary == obj.imaginary) {
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

void storeNum() {
    store.push_back(real);
    store.push_back(imaginary);
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
    Complex num1(num1real, num1im);
    cout << "The first complex number: " << num1.get_real() << " + " << num1.get_imaginary << "i" << endl;
    cout << "Enter your second complex number:" << endl;
    cin >> num2real;
    cin >> num2im;
    Complex num2(num2real, num2im);
    cout << "The second complex number: " << num2.get_real() << " + " << num2.get_imaginary << "i" << endl;
    Complex newNum = num1 - num2;
    cout << "First number - Second number: " << newNum.get_real() << " + " << newNum.get_imaginary() << "i" << endl;
    bool equal;
    if (num1 == num2) {
        equal = true;
    }else {
        equal = false;
    }
    cout << "The first and second numbers are equal: " << equal << endl;
    num1.storeNum();
    num2.storeNum();
    cout << "The value that is stored in index [0] of the vector: " << store[0] << endl;
    cout << "The value that is stored in index [1] of the vector: " << store[1] << endl;
    cout << "The value that is stored in index [2] of the vector: " << store[2] << endl;
    cout << "The value that is stored in index [3] of the vector: " << store[3] << endl;
    return 0;
}

