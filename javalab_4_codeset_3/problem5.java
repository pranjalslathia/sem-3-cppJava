class Account {
    protected int accountNumber;
    protected double balance;

    Account(int accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount);
        } else {
            System.out.println("Invalid deposit amount!");
        }
    }

    void deposit(double amount, String description) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount);
            System.out.println("Description: " + description);
        } else {
            System.out.println("Invalid deposit amount!");
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Withdrawal rejected!");
        }
    }

    void calculateInterest() {
        System.out.println("No interest applicable.");
    }

    void displayBalance() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Balance: " + balance);
    }
}

class SavingsAccount extends Account {

    SavingsAccount(int accountNumber, double balance) {
        super(accountNumber, balance);
    }

    @Override
    void withdraw(double amount) {
        double minimumBalance = 1000;

        if (amount > 0 && balance - amount >= minimumBalance) {
            balance -= amount;
            System.out.println("Savings withdrawal successful: " + amount);
        } else {
            System.out.println("Savings withdrawal rejected!");
            System.out.println("Minimum balance of 1000 must be maintained.");
        }
    }

    @Override
    void calculateInterest() {
        double interest = balance * 0.05;
        balance += interest;

        System.out.println("Savings Interest: " + interest);
    }
}

class CurrentAccount extends Account {

    CurrentAccount(int accountNumber, double balance) {
        super(accountNumber, balance);
    }

    @Override
    void withdraw(double amount) {
        double overdraftLimit = 5000;

        if (amount > 0 && amount <= balance + overdraftLimit) {
            balance -= amount;
            System.out.println("Current withdrawal successful: " + amount);
        } else {
            System.out.println("Current withdrawal rejected!");
            System.out.println("Overdraft limit exceeded.");
        }
    }
}

public class problem5 {
    public static void main(String[] args) {

        Account[] accounts = new Account[2];

        accounts[0] = new SavingsAccount(101, 10000);
        accounts[1] = new CurrentAccount(102, 20000);

        for (Account acc : accounts) {

            System.out.println("\n----------------------");

            acc.displayBalance();

            acc.deposit(2000);
            acc.deposit(1000, "Salary Deposit");

            acc.withdraw(5000);

            acc.calculateInterest();

            System.out.println("Final Account Details:");
            acc.displayBalance();
        }
    }
}