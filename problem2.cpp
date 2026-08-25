#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int n, buffer;
    int i = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(i < n){
        cout << a << " ";
        buffer = a + b;
        a = b;
        b = buffer;
        i++;
    }
    return 0;
}