#include <iostream>
#include <string>
#include <vector>

class Number{
private:
    int x = 10;
    int y = 20;
public:
    friend void larger(Number n);
};

void larger(Number n){
    if (n.x > n.y && n.x != n.y)
    {
        std::cout << "Largest: " << n.x << std::endl;
    }
    else{
        std::cout << "Largest: " << n.y << std::endl;
    }
}

int main(){
    Number n1;
    larger(n1);
    return 0;
}