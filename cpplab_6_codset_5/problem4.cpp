#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    public:
        int registrationNum;
        string companyName;
    Vehicle(int regNum, string compName){
        registrationNum = regNum;
        companyName = compName;
    }
};

class Bike:public Vehicle {

    public:
    string fuelType;
    int CC;

    Bike(int regNum, string compName, string fuel, int cc):Vehicle(regNum, compName){
        fuelType = fuel;
        CC = cc;
    }

    void display(){
    cout << "Bike Details:" << endl;
        cout << "Registeration Number: " << registrationNum << endl;
        cout << "Comapany: " << companyName << endl;
        cout << "Fuel: " << fuelType << endl;
        cout << "Engine Capacity: " << CC << endl;
        cout << "--------------" << endl;
    }
};

class Car:public Vehicle {

    public:
    string fuelType;
    int CC;

    Car(int regNum, string compName, string fuel, int cc):Vehicle(regNum, compName){
        fuelType = fuel;
        CC = cc;
    }

    void display(){
    cout << "Car Details:" << endl;
        cout << "Registeration Number: " << registrationNum << endl;
        cout << "Comapany: " << companyName << endl;
        cout << "Fuel: " << fuelType << endl;
        cout << "Engine Capacity: " << CC << endl;
        cout << "--------------" << endl;
    }
};

int main(){
    Car car1(01, "Nissan", "petrol", 800);
    Car car2(02, "Suzuki", "petrol", 1000);

    Bike bike1(03, "Ninja", "petrol", 900);
    Bike bike2(04, "Harley", "petrol", 1000);

    car1.display();
    bike2.display();
    
    return 0;
}