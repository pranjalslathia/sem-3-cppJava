#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1,1,2,2,44,9,10};
    int frequency = 0, element;
    std::cout << "Find occurence: ";
    std::cin >> element;
    for (int i = 0; i < numbers.size(); i++){
        if (element == numbers[i]){
            frequency += 1;
        }
    }
    std::cout << "Element: " << element << " | Frequency: " << frequency << std::endl;
    return 0;
}
