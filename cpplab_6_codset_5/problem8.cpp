#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T arr[5];
public:
    Array(){
        cout << "Enter 5 elements:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        } 
    }
    void display(){
        cout << "Array elements are: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << endl;
        }
        
    }

    T largest(){
        T largest = arr[0];
        for (int i = 0; i < 5; i++)
        {
            if (largest < arr[i])
            {
                largest = arr[i];
            }
        }
        return largest;
    }

    T smallest(){
        T smallest = arr[0];
        for (int i = 0; i < 5; i++)
        {
            if (smallest > arr[i])
            {
                smallest = arr[i];
            }
        }
        return smallest;
    }
};

int main() {
    Array<int> a1;

    a1.display();
    cout << "Largest element: " << a1.largest() << endl;
    cout << "Smallest element: " << a1.smallest() << endl;

    Array<float> f1;

    f1.display();
    cout << "Largest element: " << f1.largest() << endl;
    cout << "Smallest element: " << f1.smallest() << endl;

    return 0;
}