
class BankAccount{
    private String accHolderName;
    private int accNum;
    private float balance;

    BankAccount(String name, int accNum){
        this.balance = 0;
        this.accHolderName = name;
        this.accNum = accNum;
    }
    BankAccount(String name, int accNum, float balance){
        this.balance = balance;
        this.accHolderName = name;
        this.accNum = accNum;
    }

    public void deposit(float deposit){
        this.balance += deposit;
    }

    public void withdraw(float withdraw){
        this.balance -= withdraw;
    }    
    public void displayAccountDetails() {
        System.out.println("\nBankAccount Details:");
        System.out.println("----------------");
        System.out.println("Account Number: " + this.accNum);
        System.out.println("Holder Name: " + this.accHolderName);
        System.out.println("Current Balance: " + this.balance);
    }
}

public class problem2 {
    public static void main(String[] args){
        BankAccount acc1 = new BankAccount("Pranjal", 0001);
        BankAccount acc2 = new BankAccount("Shivanjal", 0002, 1000);

        acc1.deposit(500);
        acc2.withdraw(200);

        acc1.displayAccountDetails();
        acc2.displayAccountDetails();
    }
}