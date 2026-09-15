#include <iostream>

class Maximum{

    public:
    int max(int x, int y){
        if (x < y)
        {
            return y;
        }
        else{
            return x;
        }
    }

    int max(int x, int y, int z){
        if (x >= y && x >= z){
            return x;
        }
        else if(y >= x && y >= z){
            return y;
        }
        else if(z >= x && x >= y){
            return z;
        }
        else{
            return 0;
        }
    }
    double max(double x, double y){
        if (x > y){
            return x;
        }
        else{
            return y;
        }
    }
};

int main(){
    Maximum n1;
    int x, y, z;
    double p, q;

    std::cout << "(Integer)\nEnter x: ";
    std::cin >> x;
    std::cout << "(Integer)\nEnter y: ";
    std::cin >> y;
    std::cout << "Max of two numbers: " << n1.max(x, y) << std::endl;
    std::cout << "\n(Integer)\nEnter x: ";
    std::cin >> x;
    std::cout << "(Integer)\nEnter y: ";
    std::cin >> y;
    std::cout << "(Integer)\nEnter z: ";
    std::cin >> z;
    std::cout << "Max of three numbers: " << n1.max(x,y,z) << std::endl;
    std::cout << "\n(Float)\nEnter x: ";
    std::cin >> p;
    std::cout << "(Float)\nEnter y: ";
    std::cin >> q;
    std::cout << "Max of two floating-point number: " << n1.max(p, q) << std::endl;
    
    return 0;
}