#include <iostream>
#include <string>

class Employee {

    std::string employeeName;
    int basicSalary;

public:
    Employee(){
        std::cout << "Employee Name: ";
        getline(std::cin, employeeName);
        std::cout << "Basic Salary: ";
        std::cin >> basicSalary;
    }

    int hra(float interest){
        return basicSalary * interest;
    }

    int da(float interest){
        return basicSalary * interest;
    }
    int gross(int da, int hra){
        std::cout << "Gross Salary (basic + hra + da): " << da + hra + basicSalary;
    }

};

int main() {

    Employee employee1;
    int da = employee1.da(0.1);
    int hra = employee1.hra(0.2);
    employee1.gross(da, hra);
    
    return 0;
}