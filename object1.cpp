#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
};

int main() {
    Student student;

    
    student.name = "John";
    student.roll_no = 2;

    cout << "Name: " << student.name << endl;
    cout << "Roll No: " << student.roll_no << endl;
    cout<<"Aman Gupta 23100BTCSE14753"<<endl;

    return 0;
}
