import java.util.Scanner;

class Calculator {
    void calculate(int a, int b){
        System.out.println("Selected (int, int): " + a + "," + b);
    }
    void calculate(double a, double b){
        System.out.println("Selected (double, double): " + a + "," + b);
    }
    void calculate(long a, long b){
        System.out.println("Selected (long, long): " + a + "," + b);
    }
    void calculate(int a, double b){
        System.out.println("Selected (int, double): " + a + "," + b);
    }
    void calculate(int a, long b){
        System.out.println("Selected (int, long): " + a + "," + b);
    }
}



public class problem2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Calculator cal = new Calculator();
        cal.calculate(10, 20L);
        cal.calculate(10, 20.5f);
        cal.calculate(10, 20);
        cal.calculate(10L, 10.5f);
        scanner.close(); 

    }
}
