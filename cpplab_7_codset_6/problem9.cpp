#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string line;
    int numberOfLines = 0;
    int numberOfWords;
    int numberOfCharacter = 0;
     
    ifstream inFile("./student.txt");

    if (inFile.is_open())
    {
        numberOfWords += 1;
        while (getline(inFile, line)){
            numberOfLines++;
            numberOfCharacter += line.length();
            for (char ch : line)
            {
                if (isspace(ch))
                {
                    numberOfWords++;
                }
                
            }
            
            
        }
        cout << "Number Of Lines: " << numberOfLines << endl;
        cout << "Number Of Characters: " << numberOfCharacter << endl;
        cout << "Number Of Words: " << numberOfWords << endl;
        
        inFile.close();
    }
    else{
        cout << "File Not Found";
    }
    
    
    return 0;
}