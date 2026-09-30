#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    cout << "Enter first Number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    try{
        if (n2 == 0)
        {
            throw runtime_error("Division by zero not possible.");
        }
        
        int result = n1/n2;
        cout << "Divison Result: " << result << endl;
    }
    catch(const runtime_error& e){
        cout << "Error Message: " << e.what() << endl;
    }
    
    return 0;
}