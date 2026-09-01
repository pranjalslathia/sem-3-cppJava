#include <iostream>
#include <string>

class Student {

    std::string name;
    int rollNo;
public:
void setData(){
    std::cout <<"Enter Name: ";
    getline(std::cin,name);
    std::cout <<"Enter RollNo.: ";
    std::cin >> rollNo;
}
void displayData(){
    std::cout <<"name: " << name << std::endl;
    std::cout <<"Roll No.: " << rollNo << std::endl;

}
};

int main() {

    Student s1;
    s1.setData();
    s1.displayData();

    return 0;
}