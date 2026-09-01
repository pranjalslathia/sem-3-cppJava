#include <iostream>
#include <vector>

// Find Maximum Element in an Array 
int main() {
    std::vector<int> numbers;
    int n, input, max;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter " << n << " elements: " << std::endl;
    while (n != 0){
        std::cin >> input;
        numbers.push_back(input);
        n--;
    }
    max = numbers[0];
    for (int i = 0; i < numbers.size(); i++){ 
        if (max < numbers[i]){
            max = numbers[i];
        }
    }
    std::cout << "Max: " << max << std::endl;
    return 0;
}
