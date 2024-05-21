#include <iostream>
#include <cmath>

class Triangle {
private:
    double a, b, c;

public:
    
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

   
    double perimeter() const {
        return a + b + c;
    }

    
    double area() const {
        double s = perimeter() / 2; 
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void display() const {
        std::cout << "Perimeter: " << perimeter() << " units" << std::endl;
        std::cout << "Area: " << area() << " square units" << std::endl;
    }
};

int main() {

    Triangle triangle(3.0, 4.0, 5.0);

    
    triangle.display();

    return 0;
}




