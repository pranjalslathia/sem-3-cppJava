class Person {
    String name;
    int id;

    Person(String name, int id) {
        this.name = name;
        this.id = id;
        System.out.println("\nPerson constructor initialized.");
    };
}

class Employee extends Person {
    boolean clearence;

    Employee(int id, String name,boolean clearence) {
        super(name, id);
        this.clearence = clearence;
        System.out.println("Employee constructor initialized.");
    };

}

class Developer extends Employee {

    String language, projectName;

    Developer(int id, String name, boolean clearence, String language) {
        super(id, name, clearence);
        this.language = language;
        System.out.println("Developer constructor initialized.");
    }
    void displayDetail(){
        System.out.println("Employee Details: \n------------");
        System.out.println("Employee Id: " + id);
        System.out.println("Employee Name: " + name);
        System.out.println("Security Clerance: " + clearence);
        System.out.println("Project Name: " + this.projectName);
        System.out.println("Language: " + language);
    }
}

public class problem1 {

    public static void main(String[] args) {
        Developer john = new Developer(0, "John", true, "cpp");
        john.displayDetail();
        Developer ron = new Developer(1, "Ron", false, "c#");
        ron.displayDetail();

    }
}
