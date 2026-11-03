
class Employee{
    private String employeeName;
    private int employeeId, basicSalary;
    // private int basicSalary;

    Employee(int employeeId, String name, int basicSalary){
        this.basicSalary = basicSalary;
        this.employeeName = name;
        this.employeeId = employeeId;
    }
    Employee(String name, int employeeId, int basicSalary){
        this.basicSalary = basicSalary;
        this.employeeName = name;
        this.employeeId = employeeId;
    }

    public int hra(){
        return (this.basicSalary * 20)/100;
    }

    public int bonus(){
        if (this.basicSalary > 50000) {
            return (this.basicSalary * 5)/100;    
        }
        else{
            return 0;
        }
    }

    public int da(){
        return (this.basicSalary * 10)/100;
    }

    public int gross(){
        return this.basicSalary + this.da() + this.hra() + this.bonus();
    }
    

    public void displayEmployeeDetails() {
        System.out.println("\nEmployee Details:");
        System.out.println("----------------");
        System.out.println("Employee Id: " + this.employeeId);
        System.out.println("Employee Name: " + this.employeeName);
        System.out.println("Salary (basic+HRA+DA+ConditionalBonus): " + this.gross());
    }
    public Employee compareEmployee(Employee obj){
        if (this.gross() > obj.gross()) {
            return this;
        }
        else{
            return obj;
        }
    }
}

public class problem3 {
    public static void main(String[] args){
        Employee emp1 = new Employee(1, "Pranjal", 100000);
        Employee emp2 = new Employee(2, "Rranjal", 60000);
        Employee emp3 = new Employee(3, "Sranjal", 30000);

        emp1.displayEmployeeDetails();
        emp2.displayEmployeeDetails();
        emp3.displayEmployeeDetails();

        System.out.println("\nOn comparing emp2 and emp2\nEmployee with higher gross salary -> ");
        (emp2.compareEmployee(emp3)).displayEmployeeDetails();
    }
}