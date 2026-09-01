#include <iostream>
#include <vector>

// Second Largest Element
int main() {
    std::vector<int> numbers = {2, 21, 0, 11, 9, 20};
    int max = 1;
    int max_2 = 0;
    int temp;
    for (int i = 0; i < numbers.size(); i++){
        if (max < numbers[i]){
            max_2 = max;
            max = numbers[i];
        }
        else if (max_2 < numbers[i])
        {
            max_2 = numbers[i];
        }
    }
    std::cout << "Max: " << max << " | Second Max: " << max_2 << std::endl;
    return 0;
}
