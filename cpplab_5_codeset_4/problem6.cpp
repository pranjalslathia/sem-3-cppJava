#include <iostream>
#include <string>
#include <vector>

class BankAccount{
    public:
    int accNumber;
    std::string customerName;
    static int totalAccounts;

    BankAccount(std::string name, int accNum){
        accNumber = accNum;
        customerName = name;
        totalAccounts++;
    }

    static void displayAllAccounts(std::vector<BankAccount> accArray){
        std::cout << "All Accounts Details\n----------" << std::endl;
        for (int i = 0; i < accArray.size(); i++)
        {
            std::cout << "Customer Name: " << accArray[i].customerName << std::endl;
            std::cout << "Account Number: " << accArray[i].accNumber << std::endl;
            std::cout << std::endl;
        }
          
    }
};
int BankAccount::totalAccounts = 0;

int main(){
    std::string name;
    int accNum;

    std::cout << "Account 1 details ->\nName: ";
    std::cin >> name;
    std::cout << "Account Number: ";
    std::cin >> accNum;
    BankAccount a1(name, accNum);
    
    std::cout << "\nAccount 2 details ->\nName: ";
    std::cin >> name;
    std::cout << "Account Number: ";
    std::cin >> accNum;
    BankAccount a2(name, accNum);

    std::cout << "\nTotal Accounts: " << BankAccount::totalAccounts << std::endl;
    BankAccount::displayAllAccounts({a1,a2});
    return 0;
}