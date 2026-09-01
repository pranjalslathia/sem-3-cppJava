#include <iostream>
#include <vector>

// Find Minimum Element in an Array 
int main() {
    std::vector<int> numbers;
    int n, input, min;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter " << n << " elements: " << std::endl;
    while (n != 0){
        std::cin >> input;
        numbers.push_back(input);
        n--;
    }
     min = numbers[0];
    for (int i = 0; i < numbers.size(); i++){
        if (min > numbers[i]){
            min = numbers[i];
        }
    }
    std::cout << "Min: " << min << std::endl;
    return 0;
}
