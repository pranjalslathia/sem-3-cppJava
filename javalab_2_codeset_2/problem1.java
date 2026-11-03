import java.util.Arrays;

class Student{
    private String name;
    private int rollNo;
    private float[] marks = new float[3];

    Student(String name, int rollNo, float[] marks){
        this.name = name;
        this.rollNo = rollNo;
        this.marks = marks;
    }

    public float totalMarks(){
        // int sum = Arrays.stream(marks).sum();
        float sum = 0;
        for(int i = 0; i < marks.length; i++){
            sum += marks[i];
        }
        return sum;
    }
    public float percentage(){
        float percentage = this.totalMarks() / (marks.length);
        return percentage;
    }   
    public char grade(){
        if (this.percentage() >= 90) {
            return 'A';
        }
        else if(this.percentage() >= 75){
            return 'B';
        }
        else if(this.percentage() >= 60){
            return 'C';
        }
        else{
            return 'D';
        }
    }
    public void displayDetails() {
        System.out.println("Student Details:");
        System.out.println("----------------");
        System.out.println("Roll Number: " + this.rollNo);
        System.out.println("Name: " + this.name);
        System.out.println("Total Marks: " + (int) this.totalMarks() + "/" + (this.marks.length*100));
        System.out.println("Percentage: " + this.percentage());
        System.out.println("Grade: " + this.grade());
    }
}

public class problem1 {
    public static void main(String[] args){
        float[] marks = {20, 30, 30};
        Student s1 = new Student("Pranjal", 28, marks);

        s1.displayDetails();
    }
}