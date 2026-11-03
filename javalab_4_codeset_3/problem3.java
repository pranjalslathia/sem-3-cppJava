
class Vehicle {
    double calculateRent(int days){
        return 10.5 * days;
    };
}

class Car extends Vehicle {
    double calculateRent(int days){
        return super.calculateRent(days) + (0.5 * days);
    }
}

class LuxuryCar extends Vehicle {
    double calculateRent(int days){
        return super.calculateRent(days) + (5 * days);
    }
}



public class problem3 {

    public static void main(String[] args) {
        Car alto = new Car();
        LuxuryCar ferrari = new LuxuryCar();
        System.out.println("Car rent: " + alto.calculateRent(10));
        System.out.println("Luxury Car rent: " + ferrari.calculateRent(10));

    }
}
