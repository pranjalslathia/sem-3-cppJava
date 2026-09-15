#include <iostream>

class Complex{
    public:
    int real;
    int imaginary;
    Complex(int r, int i){
        real = r;
        imaginary = i;
    }
    void operator+(Complex n){
        real += n.real;
        imaginary += n.imaginary;
    }
};

int main(){
    int r, i;
    std::cout << "(Complex Number 1)\nReal Part: ";
    std::cin >> r;
    std::cout << "Imaginary Part: ";
    std::cin >> i;

    Complex n1(r,i);

    std::cout << "(Complex Number 2)\nReal Part: ";
    std::cin >> r;
    std::cout << "Imaginary Part: ";
    std::cin >> i;

    Complex n2(r,i);

    std::cout << "N1 before addition: " << n1.real << "+" << n1.imaginary << "i" << std::endl;
    n1+n2;
    std::cout << "N1 after addition: " << n1.real << "+" << n1.imaginary << "i" << std::endl;
    
    return 0;
}