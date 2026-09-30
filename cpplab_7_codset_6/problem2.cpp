#include <iostream>
#include <string>

using namespace std;

class NegativeNumberException : public exception {
    public:        
        string message;
        NegativeNumberException(string err_message){
            message = err_message;
        }  
};


int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;

    try{
        if (num < 0)
        {
            throw NegativeNumberException("Square root of a negative number cannot be calculated");
        }
        
        int result = num * num;
        cout << "Square Root of " << num << " = " << result << endl;
    }
    catch(const NegativeNumberException& e){
        cout << "Error Message: " << e.message << endl;
    }
    
    return 0;
}