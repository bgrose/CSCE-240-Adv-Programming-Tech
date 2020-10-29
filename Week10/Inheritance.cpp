//Single level inheritance Vehicle, Car
//Multi-level Vehicle, Car, Tesla
//Multiple inheritance Vehicle, FourWheels, Car
//Multi-Path Graphic, Barchart (graphic), LineChart (graphic), HybridChart (bar,line)
//    class scope resolution LineChart::res
//    virtual base class (variables shared between base classes) : virtual public Graphic
//Revisit function overriding... now with polymorphism
#include <cstdlib> 
#include <iostream> 

using namespace std;

class Vehicle {
	public: 
		Vehicle(){
			numberOfWheels = 0;

		}
		Vehicle(int _numW) {
            numberOfWheels = _numW;
		}

		void print() {
            cout << "Vehicle print" << endl;
            cout << "Number Wheels: " << numberOfWheels << endl;
            cout << endl;
        }
	protected:
		int numberOfWheels;


};
//public, protected, private
class Car : public Vehicle{
    public:
        Car() : Vehicle() {
            mpg = 0.0;
            numberOfWheels = 4;
        }
        Car(int _numW, float _mpg) : Vehicle(_numW) {
            mpg = _mpg;
        }
        void print() {
            cout << "Car print" << endl;
            cout << "Number Wheels: " << numberOfWheels << endl;
            cout << "MPG: " << mpg << endl;
            cout << endl;
        }

    protected:
        float mpg;
};

class Tesla : public Car{
    public:
        Tesla(float _cH) {
            chargeHours = _cH;
        }
        void print() {
            cout << "Tesla print" << endl;
            cout << "Number Wheels: " << numberOfWheels << endl;
            cout << "MPG: " << mpg << endl;
            cout << "Charge Hours: " << chargeHours << endl;
            cout << endl;
        }
    protected:
        float chargeHours;
};

int main(int argc, char** argv) 
{
	Vehicle v(2);
	v.print();
	Car c(4, 40.0);
	c.print();
	Tesla t(6.5);
	t.print();
	return 0;
}
