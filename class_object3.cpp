#include <iostream>

class Average {
public:
 
    static void calculateAndPrintAverage() {
        double num1, num2, num3;
        
        
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        std::cin >> num2;
        std::cout << "Enter the third number: ";
        std::cin >> num3;

    
        double average = (num1 + num2 + num3) / 3.0;

        std::cout << "The average of the three numbers is: " << average << std::endl;
    }
};

int main() {
    
    Average::calculateAndPrintAverage();

    return 0;
}
