#include <iostream>
#include <string>

using namespace std;

class Employee {
    protected:
        string name;
        int employeeID;
    public:
    Employee(int id, string n){
        employeeID = id;
        name = n;
    }
};

class Manager:protected Employee{
    private:
        string department;
        double salary;
    public:
        Manager(int id, string n, string dept, double sal):Employee(id, n){
            department = dept;
            salary = sal;
        }
    void display(){
    cout << "Employee Details:\n------------" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    Manager managers[5] = {
        Manager(1, "Leon", "MiliTech", 10000.00),
        Manager(2, "Ada", "R&D", 10000.00),
        Manager(3, "Leon", "Logistics", 1000.00),
        Manager(4, "Leon", "AI", 1000.00),
        Manager(5, "Leon", "Pantry", 1000.00),
    };
    
    for (int i = 0; i < 5; i++)
    {
        managers[i].display();
    }
    
    return 0;
}