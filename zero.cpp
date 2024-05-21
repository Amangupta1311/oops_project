#include <iostream>
using namespace std;
int main() {
int number;
cout << "Enter any number: ";
cin >> number;
if (number < 0) {
cout << "Number is negative" << endl;
} else if (number > 0) {
cout << "Number is positive" << endl;
} else if (number == 0) {
cout << "0 is neither positive nor negative" << endl;
} else {
cout << "Invalid Number" << endl;
}
cout<<"Aman Gupta 23100BTCSE14753"<<endl;
return 0;
}