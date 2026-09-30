#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int index;
    vector<int> array = {1,2,3,4,5,6,7,8,9,10};
    try{
        cout << "Enter Index: ";
        cin >> index;
        if (index < 0 || index > 9)
        {
            throw out_of_range("Array Index Out of Bounds.");
        }
        else{
            cout << "Array[" << index << "] = " << array[index] << endl;
        }
        
    }
    catch(const out_of_range &e){
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
}   