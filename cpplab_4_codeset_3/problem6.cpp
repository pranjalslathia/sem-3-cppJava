#include <iostream>
#include <string>
#include <vector>

class Emplopyees {
    public:
    std::string employeeName;
    float employeeSalary;

    Emplopyees(std::string name, float salary){
        employeeName = name;
        employeeSalary = salary;
    }
};
std::string highestSalary(std::vector<Emplopyees> employee){
    float highest = employee[0].employeeSalary;
    std::string topEmployee = employee[0].employeeName;
        for (int i = 0; i < employee.size(), i++;)
        {   
            if (highest < employee[i].employeeSalary)
            {
                highest = employee[i].employeeSalary;
            }
        }
        for (int i = 0; i < employee.size(), i++;)
        {
            if (highest == employee[i].employeeSalary)
            {
                topEmployee = employee[i].employeeName;
                break;
            }
        }
        return topEmployee;
    }

void revisedSalary(Emplopyees &employee){
    float revisedPay = employee.employeeSalary * 0.1;
    employee.employeeSalary += revisedPay;
    }

int main(){
    Emplopyees e1("Pranjal", 200), e2("Ethan Winters", 100), e3("Eda Wong", 500.99);
    highestSalary({e1,e2,e3});
    revisedSalary(e1);
    std::cout << "Emplyoyee: " << e1.employeeName << std::endl;
    std::cout << "Updated Salary: " << e1.employeeSalary << std::endl;

    return 0;
}