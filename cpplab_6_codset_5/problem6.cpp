#include <iostream>
#include <string>

using namespace std;


template <typename T>
T maxOfTwo(T x, T y){
    return x > y? x: y;
}

template <typename T>
void swapNum(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}

int main(){
    int int1, int2;
    cout << "First Integer: ";
    cin >> int1;
    cout << "Second Integer: ";
    cin >> int2;
    cout << "Larger Integer: " << maxOfTwo(int1, int2) << endl;
    
    float float1, float2;
    cout << "First Float: ";
    cin >> float1;
    cout << "Second Float: ";
    cin >> float2;
    cout << "Larger Float: " << maxOfTwo(float1, float2) << endl;

    double double1, double2;
    cout << "First double: ";
    cin >> double1;
    cout << "Second double: ";
    cin >> double2;
    cout << "Larger double: " << maxOfTwo(double1, double2) << endl;

    char char1, char2;
    cout << "First character: ";
    cin >> char1;
    cout << "Second character: ";
    cin >> char2;
    cout << "Larger character: " << maxOfTwo(char1, char2) << endl;

    cout << "\nBefore Swap:\n Number 1:" << int1 << "\nNumber 2: " << int2 << endl;
    swapNum(int1, int2);
    cout << "After Swap:\n Number 1:" << int1 << "\nNumber 2: " << int2 << endl;

    cout << "Before Swap:\n Char 1:" << char1 << "\nChar 2: " << char2 << endl;
    swapNum(char1, char2);
    cout << "After Swap:\n Char 1:" << char1 << "\nChar 2: " << char2 << endl;
    return 0;
}