#include <iostream>
#include <string>

class ArraySum {

    int *numbers = new int[10];

public:
    ArraySum(){
        int number;
        for (int i = 0; i < 10; i++){
            std::cout << "Enter Number [" << i << "]: ";
            std::cin >> number;
            numbers[i] = number;
        }
    }
    int findSum(){
        int sum = 0;
        for (int i = 0; i < 10; i++){
            sum += numbers[i];
        }
        return sum;
    }
};

int main() {

    ArraySum a1;
    std::cout << "Sum result: " << a1.findSum() << std::endl;
    
    return 0;
}