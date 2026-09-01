#include <iostream>
#include <string>

class Studnet {

    std::string name;
    int rollNo;
    float *marks = new float[5];

public:
    Studnet(){
        std::cout << "Student Name: ";
        getline(std::cin, name);
        std::cout << "Roll No.: ";
        std::cin >> rollNo;

        float mark;
        for (int i = 0; i < 5; i++){
            std::cout << "Enter Marks [" << i+1 << "]: ";
            std::cin >> mark;
            marks[i] = mark;
        }
    }

    float totalMarks(){
        float totalMarks = 0.0;
        for (int i = 0; i < 5; i++){
            totalMarks += marks[i];
        }
        return totalMarks;
    }

    float percentge(float total_marks){
        return (total_marks / (500)) * 100;
    }

    std::string grade(float total_marks){

        if (total_marks >= 90.0)
        {
            return "A";
        }
        else if (total_marks >= 75.0 && total_marks <= 89.0)
        {
            return "B";
        }
        else if (total_marks >= 60.0 && total_marks <= 74.0)
        {
            return "C";
        }
        else if (total_marks >= 40.0 && total_marks <= 59.0)
        {
            return "D";
        }
        else if (total_marks <= 40.0)
        {
            return "F";
        }
        
    }

};

int main() {

    Studnet s1;
    std::cout << "Total Marks: " << s1.totalMarks() << std::endl;
    std::cout << "Grade: " << s1.grade(s1.totalMarks()) << std::endl;
    std::cout << "Percentage: " << s1.percentge(s1.totalMarks()) << "%" << std::endl;
    
    
    
    return 0;
}