#include <iostream>
#include <string>

class Student {
private:
    std::string name;

public:
    Student(const std::string& student_name = "Unknown") : name(student_name) {}


    void display() const {
        std::cout << "Student Name: " << name << std::endl;
    }
};

int main() {

    Student student1("John");
    Student student2;

    student1.display();
    student2.display();

    return 0;
}
