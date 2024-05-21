#include <iostream>
using namespace std;

int getProduct(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int num1, num2;

    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    
    int product = getProduct(num1, num2);

    
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    cout<<"Aman Gupta 23100BTCSE14753"<<endl;
    return 0;
}
