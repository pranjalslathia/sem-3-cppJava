#include <iostream>
#include <string>

class rectangle {

    int length;
    int breadth;

public:
void input(int len, int bth){
    
    length = len;
    breadth = bth;
}
int calculateArea(){
    return length * breadth;
}
void displayArea(){
    std::cout <<"Area of rectangle: " << length * breadth << std::endl;
}
};

int main() {

    rectangle r1;
    int len, brth;
    std::cout << "Enter Length: ";
    std::cin >> len;
    std::cout << "Enter Breadth: ";
    std::cin >> brth;
    r1.input(len, brth);
    r1.calculateArea();
    r1.displayArea();

    return 0;
}