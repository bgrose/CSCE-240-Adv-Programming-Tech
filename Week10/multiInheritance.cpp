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

class Graphics {
    public:
        Graphics() {
            resolution = 100;
        }
        virtual void print() /*final*/{
            cout << "Graphics print" << endl;
            cout << "Resolution: " << resolution << endl;
        }

    protected:
        int resolution;
};

class LineChart : virtual public Graphics{
    public:
        LineChart() {
            lineThickness = 1;
            resolution = 500;
        }
        void print() override {
            cout << "Line Chart print" << endl;
            cout << "Resolution: " << resolution << endl;
            cout << "Line Thickness: " << lineThickness << endl;
        };

    protected:
        int lineThickness;

};

class BarChart : virtual public Graphics{
public:
    BarChart() {
        numBars = 10;
        resolution = 110;
    }
    void print() override {
        cout << "Bar Chart print" << endl;
        cout << "Resolution: " << resolution << endl;
        cout << "Number of Bars: " << numBars << endl;
    };

protected:
    int numBars;
};

class LineBarChart : public LineChart, public BarChart{
    public:
        void print() {
            cout << "Line-Bar Chart print" << endl;
            cout << "Resolution: " << resolution << endl;
            cout << "Line Thickness: " << lineThickness << endl;
            cout << "Number of Bars: " << numBars << endl;
        };
    protected:
};

void func(Graphics *);

int main(int argc, char** argv) 
{
	LineBarChart lb;
	lb.print();
	Graphics *g = &lb;
	g->print();
	return 0;
}
