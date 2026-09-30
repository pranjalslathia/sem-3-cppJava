#include <iostream>
#include <string>

using namespace std;

int main(){
    int marks;
    try{
        cout << "Enter marks: ";
        cin >> marks;
        if (marks < 0 || marks > 100)
        {
            throw invalid_argument("Marks should be between 0 and 100.");
        }
        else{
            cout << "Marks Accepted!" << endl;
        }
        
    }
    catch(const invalid_argument &e){
        cout << "Invalid Marks! " << e.what() << endl;
    }
    
    
    return 0;
}