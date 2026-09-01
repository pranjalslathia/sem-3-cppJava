#include <iostream>
#include <vector>
#include <string>

// Array Reversal
int main() {
    std::string name, buffer;
    std::vector<std::string> names = {"daku", "professor", "billusanda", "hergoodboyy"};
    for (int i = 0; i < names.size(); i++){
       name = names[i];
       buffer = "";
       for (int i = name.length() - 1; i >= 0 ; i--){
            buffer += name[i];
       }
       names[i] = buffer;

    }
    std::cout << "{";
    for (int i = 0; i < names.size(); i++){
        if (i == names.size()-1)
        {
            std::cout << names[i];
            break;
        }
        std::cout << names[i] << ", "; 
    }
    std::cout << "}" << std::endl;
    
    return 0;
}
