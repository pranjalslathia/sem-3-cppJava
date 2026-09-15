#include <iostream>

class ClassB;

class Interest {
public:
    int time;
    double principle, rate;
    Interest(){
        std::cout << "Principle: ";
        std::cin >> principle;
        std::cout << "Rate(%): ";
        std::cin >> rate;
        std::cout << "Time(Yr): ";
        std::cin >> time;
    }  
    friend inline double calculateSI(Interest i);
};
inline double calculateSI(Interest i){
        return (i.principle * i.time * i.rate) / 100;
    } 
int main(){
    Interest i;
    
    double interestGained = calculateSI(i);
    std::cout << "Interest Gained: " << interestGained << std::endl;

    return 0;
}