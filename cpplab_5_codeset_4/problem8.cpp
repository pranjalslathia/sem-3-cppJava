#include <iostream>
#include <string>
#include <vector>

class classA {
private:
    int x;
public:
    friend class ClassB;
};

class ClassB {
private:
    int y;
public:
    friend class ClassA;
    static void larger(Number &n){
        if (n.x > n.y && n.x != n.y)
        {
            std::cout << "Largest: " << n.x << std::endl;
        }
        else{
            std::cout << "Largest: " << n.y << std::endl;
        }
        
    }
};

int main(){
    Number n1;
    Compare::larger(n1);
    return 0;
}