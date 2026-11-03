import java.util.HashSet;

class Student{
    String name;
    int registrationNum;

    Student(int registrationNum, String name){
        this.registrationNum = registrationNum;
        this.name = name;
    }

    // void displayProduct(){
    //     System.out.println("Product ID: " + productId);
    //     System.out.println("Product Name: " + name);
    //     System.out.println("Product Price: " + price);
    //     System.out.println("Quantity: " + available_quantity + "\n");
    // }
}

public class problem6 {
    public static void main(String[] args){
        HashSet<Student> students = new HashSet<Student>();
        
        Student student_1 = new Student(101, "pranjal");
        Student student_2 = new Student(102, "Aditya Singh");
        Student student_3 = new Student(102, "Aditya Thapa");

        students.add(student_1);
        students.add(student_2);
        students.add(student_3);
        
        
    }
}