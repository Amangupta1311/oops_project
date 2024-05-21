#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:

    Number() : num(0) {}

  
    Number(int n) : num(n) {}

    Number(const Number& other) : num(other.num) {}

   
    void display() {
        cout << "Number: " << num << endl;
    }
};

int main() {
   
    Number original(10);
    cout << "Aman Gupta" << endl;
    cout << "23100BTCSE14753" << endl;
    cout << "Original object:" << endl;
    original.display();


    Number copied(original);
    cout << "\nCopied object (using copy constructor):" << endl;
    copied.display();

    return 0;
}
