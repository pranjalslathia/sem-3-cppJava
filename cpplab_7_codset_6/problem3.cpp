#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    public:        
        double balance;
        BankAccount(){
            cout << "Initial Deposit: ";
            cin >> balance;
        } 
        void withdraw_money(){
            double withdraw;
            cout << "Withdraw Amount: ";
            cin >> withdraw;
            if (withdraw > balance)
            {
                throw runtime_error("Insufficient Balance");
            }
            else{
                balance -= withdraw; 
            cout << withdraw << " is debited." << endl;
            }
        }
};


int main(){
    BankAccount acc1;
    try{
        acc1.withdraw_money();
    }
    catch(const runtime_error &e){
        cout << "Error: " << e.what() << endl;
    }
    
    
    return 0;
}