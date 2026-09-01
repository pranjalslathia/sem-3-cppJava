#include <iostream>
#include <string>

class Text {

    std::string str;

public:
    Text(){
        std::cout << "Enter a String: ";
        getline(std::cin, str);
    }
    int strLen(){
        int i = 0;
        int len = 0;
        while(str[i] != '\0'){
            len += 1;
            i++;
        }
        return len;
    }
};

int main() {

    Text str1;
    std::cout << "String Length: "<< str1.strLen();
    
    return 0;
}