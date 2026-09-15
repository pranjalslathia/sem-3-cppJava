#include <iostream>

class ClassB;

class ClassA {
private:
    int x;
public:
    ClassA(int value){
        x = value;
    }
    friend int sum(ClassA obj1, ClassB obj2);
};

class ClassB {
private:
    int y;
public:
    ClassB(int value){
        y = value;
    }
    friend int sum(ClassA obj1, ClassB obj2);
};

int sum(ClassA obj1, ClassB obj2){
        return obj1.x + obj2.y;
    }

int main(){
    ClassA n1(10);
    ClassB n2(20);
    std::cout << "Sum: " << sum(n1, n2) << std::endl;

    return 0;
}