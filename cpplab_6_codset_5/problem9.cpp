#include <iostream>
using namespace std;

template <class T>
class Result {
private:
    T marks[5];
public:
    Result(){
        cout << "Enter 5 subject marks:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        } 
    }
    T totalMarks(){
        T total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        return total;
    }

    T highestMarks(){
        T largest = marks[0];
        for (int i = 0; i < 5; i++)
        {
            if (largest < marks[i])
            {
                largest = marks[i];
            }
        }
        return largest;
    }

    T lowestMarks(){
        T smallest = marks[0];
        for (int i = 0; i < 5; i++)
        {
            if (smallest > marks[i])
            {
                smallest = marks[i];
            }
        }
        return smallest;
    }

    T averageMarks(T totalMarks){
        return totalMarks/5;
    }
};

int main() {
    cout << "Result (int):" << endl;
    Result<int> r1;
    int totalMarksint = r1.totalMarks();
    cout << "Total Marks: " << totalMarksint << endl;
    cout << "Maximum Marks: " << r1.highestMarks() << endl;
    cout << "Lowest Marks: " << r1.lowestMarks() << endl;
    cout << "Avergae Marks: " << r1.averageMarks(totalMarksint) << endl;

    cout << "\nResult (float):" << endl;
    Result<float> r2;
    float totalMarksfloat = r2.totalMarks();
    cout << "Total Marks: " << totalMarksfloat << endl;
    cout << "Maximum Marks: " << r2.highestMarks() << endl;
    cout << "Lowest Marks: " << r2.lowestMarks() << endl;
    cout << "Avergae Marks: " << r2.averageMarks(totalMarksfloat) << endl;
    return 0;
}