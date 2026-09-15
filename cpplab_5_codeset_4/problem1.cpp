#include <iostream>

class Area{

    public:
    int calculate(int side){
        int area = side*side;
        return area;
    }

    int calculate(int len, int width){
        int area = len*width;
        return area;
    }
    double calculate(double radius){
        int area = 2 * 3.14 * radius;
        return area;
    }
};

int main(){
    Area a1, a2, a3;

    std::cout << "Area of square: " << a1.calculate(4) << std::endl;
    std::cout << "Area of rectangle: " << a1.calculate(2,3) << std::endl;
    std::cout << "Area of circle: " << a1.calculate(2.5) << std::endl;
    
    return 0;
}