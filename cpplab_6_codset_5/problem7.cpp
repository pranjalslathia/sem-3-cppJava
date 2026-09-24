#include <iostream>
using namespace std;

template <class T>
class Pair {
private:
    T first, second;

public:
    Pair(T a, T b) {
        first = a;
        second = b;
    }

    T getMax() {
        return (first > second) ? first : second;
    }

    T getMin() {
        return (first < second) ? first : second;
    }

    void display() {
        cout << "First value: " << first << endl;
        cout << "Second value: " << second << endl;
        cout << "Maximum: " << getMax() << endl;
        cout << "Minimum: " << getMin() << endl;
    }
};

int main() {
    cout << "Integer Pair:" << endl;
    Pair<int> p1(10, 25);
    p1.display();

    cout << endl;

    cout << "Floating-Point Pair:" << endl;
    Pair<float> p2(12.5f, 8.75f);
    p2.display();

    return 0;
}