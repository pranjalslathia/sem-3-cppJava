#include <iostream>
#include <string>

using namespace std;

class UnderAgeError : public exception {
    public:        
        string message;
        UnderAgeError(string err_message){
            message = err_message;
        }  
};

int main(){
    int age;
    try{
        cout << "Enter Age: ";
        cin >> age;
        if (age < 18)
        {
            throw UnderAgeError("Not eligible for voting.");
        }
        else{
            cout << "Eligible to vote." << endl;
        }
        
    }
    catch(const UnderAgeError& e){
        cout << "Exeception: " << e.message << endl;
    }

    return 0;
}   