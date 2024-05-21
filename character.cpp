#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "The entered character is an alphabet." << endl;
        if (ch >= 'a' && ch <= 'z') {
            cout << "It is a lowercase letter." << endl;
        } else {
            cout << "It is an uppercase letter." << endl;
        }
    } else {
        cout << "The entered character is a special character." << endl;
    }
    cout<<"Aman Gupta 23100BTCSE14753"<<endl;

    return 0;
}