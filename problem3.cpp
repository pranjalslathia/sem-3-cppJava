#include <iostream>
#include <string>

class Number {

    int num;
    std::string result;
    
public:
void input(int n){
    
    num = n;
}
int isEven(){
    if (num % 2 == 0){
        result = "Even";
    }
    else{
        result = "ODD";
    }
}
void displayResult(){
    std::cout << num << " is " << result;
}
};

int main() {

    Number n1;
    int n;

    std::cout << "Enter Number: ";
    std::cin >> n;
    n1.input(n);
    n1.isEven();
    n1.displayResult();

    return 0;
}