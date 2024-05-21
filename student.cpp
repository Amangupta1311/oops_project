#include<iostream>
using namespace std;

class student {
public:
    int roll_no;
    char section;

    void display() {
        cout << "Aman Gupta" << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Section: " << section << endl;
    }

    void set_data() {
        roll_no = 53;
        section = 'A'; // Assign the character 'A' to section
    }
};

int main() {
    student s1;
    s1.set_data();
    s1.display();

    return 0;
}
