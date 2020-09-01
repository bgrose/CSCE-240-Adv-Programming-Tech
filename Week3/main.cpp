#include <iostream>
#include <string>

using namespace std;

int returnNum(int);
void callByRef(int&);

int main(int argc, char **argv) {
    int ret = 0;
    int val = 1;
    ret = returnNum(val);
    cout << "Return is: " << ret << endl;
    cout << "Return is: " << val << endl;

    callByRef(val);
    cout << "Return is: " << val << endl;
    cout << "Mem Location of Val:" << &val << endl;

    return 0;
}

//Call By Value
int returnNum(int n)
{
    cout << "Mem Location of Val:" << &n << endl;
    n = 10;
    return n;
}

//Call by reference
void callByRef(int & n)
{
    cout << "Mem Location of Val:" << &n << endl;
    n = 10;
}
