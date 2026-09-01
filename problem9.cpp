#include <iostream>
#include <string>

class BankAccount {

    std::string accountNumber;
    float balance;

public:
    BankAccount(){
        std::cout << "Enter Account Number: ";
        getline(std::cin, accountNumber);
        std::cout << "First Deposit: ";
        std::cin >> balance;
    }

    void deposit(float amount){
        balance += amount;
    }

    float withdraw(float amount){

        if (balance >= 0)
        {
            std::cout << "Withdrawing: " << amount << std::endl;
            balance -= amount;
            return amount;
        }
        else if(amount <= balance){
            std::cout << "Withdraw amount greater than balance." << std::endl;
        }
        else{
            std::cout << "Empty Balance!" << std::endl;
        }
        
    }

    float displayBalance(){
        std::cout << "Current balance: " << balance << std::endl;
    }

};

int main() {

    BankAccount acc1;
    float withdraw, deposit;
    std::cout << "Amount to deposit: ";
    std::cin >> deposit;
    acc1.deposit(deposit);
    acc1.displayBalance();
    std::cout << "\nAmount to withdraw: ";
    std::cin >> withdraw;
    acc1.withdraw(withdraw);
    
    
    return 0;
}