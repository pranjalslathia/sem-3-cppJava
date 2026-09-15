#include <iostream>

class Distance{
    public:
    int feet;
    int inches;
    Distance(int f, int i){
        feet = f;
        inches = i;
    }
    Distance operator+(Distance n){
        feet += n.feet;
        inches += n.inches;
        if (inches >= 12){
            feet++;
            inches %= 12;
        }
        Distance result(feet, inches);
        return result;

    }
};

int main(){
    int f, i;
    std::cout << "(Distance 1)\nFeet: ";
    std::cin >> f;
    std::cout << "Inches: ";
    std::cin >> i;

    Distance d1(f,i);

    std::cout << "\n(Distance 2)\nFeet: ";
    std::cin >> f;
    std::cout << "Inches: ";
    std::cin >> i;

    Distance d2(f,i);

    Distance d3 = d1+d2;
    std::cout << "\nD1 + D2 = " << d3.feet << "ft "<< d3.inches << "inches" << std::endl;
    
    return 0;
}