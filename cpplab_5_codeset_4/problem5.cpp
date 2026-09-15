#include <iostream>
#include <string>

class Student{
    public:
    static int increment;
    std::string studentName;
    int rollNumber;
    Student(std::string name, int rollNo){
        studentName = name;
        rollNumber = rollNo;
        std::cout << "(student object created)" << std::endl;
        increment++;
    }
};
int Student::increment = 0;

int main(){
    std::cout << "Static Variable before any object instance: " << Student::increment << std::endl;
    Student s1("Pranjal", 1);
    Student s2("Diva", 2);
    Student s3("John", 3);
    std::cout << "Static Variable after object instance: " << Student::increment << std::endl;

    return 0;
}