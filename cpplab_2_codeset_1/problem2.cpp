#include <iostream>
#include <string>

using namespace std;

// Fibonacci Series 
int main() {
    int a = 0;
    int b = 1;
    int n, buffer;
    int i = 0;
    cout << "Fibonacci series n Number: ";
    cin >> n;
    while(i < n){
        cout << a << " ";
        buffer = a + b;
        a = b;
        b = buffer;
        i++;
    }
    cout << endl;
    return 0;
}
