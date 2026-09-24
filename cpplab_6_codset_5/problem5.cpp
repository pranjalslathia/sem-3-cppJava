#include <iostream>
#include <string>

using namespace std;

class Account {
    public:
        int accountNumber;
        double balance;
    void display(){
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

};

class SavingAccount:public Account {

    public: 
    double savingBalance;

    SavingAccount(){
        cout << "Account Number: ";
        cin >> accountNumber;
        cout << "Saving Balance: ";
        cin >> savingBalance;
        cout << endl;
    }

    void display(){
        cout << "Saving Account Details:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << savingBalance << endl;
        cout << "-----------------------" << endl;
    }
};

class CurrentAccount:public Account {

    public:
        double currentBalance;

    CurrentAccount(){
        cout << "Account Number: ";
        cin >> accountNumber;
        cout << "Current Balance: ";
        cin >> currentBalance;
        cout << endl;
    }

    void display(){
        cout << "Current Account Details:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << currentBalance << endl;
        cout << "------------------------" << endl;
    }
};

int main(){
    SavingAccount account1;
    CurrentAccount account2;

    SavingAccount account3;

    account1.display();
    account2.display();
    account3.display();
    
    return 0;
}