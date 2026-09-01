#include <iostream>
#include <string>

class Marks {

    float *studentMarks = new float[5];

public:
    Marks(){
        float mark;
       for (int i = 0; i < 5; i++){
            std::cout << "Enter marks for student [" << i << "]: ";
            std::cin >> mark;
            studentMarks[i] = mark;
        }
    }

    int highestMarks(){
        int max_marks = studentMarks[0];
        for (int i = 0; i < 5; i++)
        {
            if (studentMarks[i] > max_marks)
            {
                max_marks = studentMarks[i];
            }
            
        }
        return max_marks;
        
    }

    void result(){
        std::cout << "\nResult:\n----------" << std::endl;
        for (int i = 0; i < 5; i++)
        {
            std::cout << "Student [" << i+1 <<"] Marks: " << studentMarks[i] << std::endl;
            
        }
    }

};

int main() {

    Marks class1;
    std::cout << "\nHighest Score: " << class1.highestMarks() << std::endl;
    class1.result();
    
    return 0;
}