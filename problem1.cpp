#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
    return 0;
}