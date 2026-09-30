#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string name;
    int rollNo;
    double marks;

    cout << "Student Details->" << endl;
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cout << "Enter marks: ";
    cin >> marks;
    
    ofstream outFile("./student.txt");
    if (outFile.is_open())
    {
        outFile << name << endl;
        outFile << rollNo << endl;
        outFile << marks << endl;
        outFile.close();
        cout << "Data Stored." << endl;
    }
    else{
        cout << "File Not Found";
    }
    
    
    return 0;
}