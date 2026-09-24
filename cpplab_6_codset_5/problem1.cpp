#include <iostream>
#include <string>

using namespace std;

class Student {
    protected:
        string name;
        int rollNum, age;
};

class EngineeringStudent:private Student{
    public:
        string branch;
        int semester;
    EngineeringStudent(){
        cout << "Enter Student Details:\n------------" << endl;
        cout << "Student Name: ";
        getline(cin, name);
        cout << "Roll Number: ";
        cin >> rollNum;
        cout << "Age: ";
        cin >> age;
        cout << "Branch: ";
        getline(cin >> ws, branch);
        cout << "Semester: ";
        cin >> semester;
    }
    void studentDetails(){
        cout << "\n\nStudent Details:\n------------" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNum << endl;
        cout << "Age: " << age << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main(){
    EngineeringStudent student1;
    student1.studentDetails();
    return 0;
}