#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> names = {"exraveganza", "elsexo", "johnny", "raze", "gattaouz"};
    std::string input;
    std::cout << "Search name: ";
    std::cin >> input;
    for (int i = 0; i < names.size(); i++){
        if (names[i] == input){
            std::cout << "Name: " << names[i] << ", Index: " << i;
        }
    }
    return 0;
}
