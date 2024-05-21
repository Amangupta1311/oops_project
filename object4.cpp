#include <iostream>
using namespace std;

class Box {
public:
    static int objectCount; 

  
    Box(double l = 1.2, double b = 2.8, double h = 2.8) : length(l), breadth(b), height(h) {
        cout << "Aman Gupta" << endl;
        cout << "23100BTCSE14753" << endl;
        cout << "Constructor called" << endl;
        objectCount++;
    }

 
    double Volume() {
        return length * breadth * height;
    }

 
    static int getCount() {
        return objectCount;
    }

private:
    double length;
    double breadth;
    double height;
};


int Box::objectCount = 0;

int main() {
    cout << "Initial Stage Count: " << Box::getCount() << endl;

    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    cout << "Final Stage Count: " << Box::getCount() << endl;

    return 0;
}
