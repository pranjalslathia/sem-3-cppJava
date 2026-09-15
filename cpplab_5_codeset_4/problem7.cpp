#include <iostream>
#include <string>
#include <vector>

class Number{
private:
    int x = 10;
    int y = 20;
public:
    friend class Compare;
};

class Compare {
public:
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