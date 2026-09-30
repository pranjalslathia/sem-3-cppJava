#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Calculator\n";
    cout << "Enter expression (+,-,/,*,): ";
    cin >> num1 >> op >> num2;

    try {
        switch (op) {
            case '+':
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case '-':
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case '*':
                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case '/':
                if (num2 == 0)
                    throw 1;

                result = num1 / num2;
                cout << "Result = " << result << endl;
                break;

            default:
                throw op;
        }
    }
    catch (int) {
        cout << "Division by Zero Error." << endl;
    }
    catch (char) {
        cout << "Invalid Operator." << endl;
    }

    return 0;
}