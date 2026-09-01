#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>


int main(){
    int n;
    int search;
    // std::cout << "Array Size: ";
    // std::cin >> n;
    std::vector<int> sortedArray = {12, 43, 50, 876, 1000, 1192, 2983};
    // std::cout << "Enter array element ->" << std::endl;
    // for (int i = 0; i < n; i++)
    // {
    //     int input;
    //     std::cout << "Array element [" << i << "]: ";
    //     std::cin >> input;
    //     sortedArray.push_back(input);
    // }
    // std::vector<int> sortedArray = sortedArray;
    // std::sort(sortedArray.begin(), sortedArray.end());
    // for (int i = 0; i < sortedArray.size(); i++)
    // {
    //     std::cout << sortedArray[i] << std::endl;
    // }
    std::cout << "\n----------\nSearch number: ";
    std::cin >> search;

    bool result = false;
    while (!result)
    {
        int median_index = sortedArray.size()/2;
        if (sortedArray[median_index] > search)
        {
            for (int i = sortedArray.size()-1; i >= median_index; i--)
            {
                sortedArray.pop_back();
            }
        }
        else if (sortedArray[median_index] < search)
        {
         for (int i = 0; i <= median_index; i++)
         {
            sortedArray.erase(sortedArray.begin());
            }
        }
        else if (search == sortedArray[median_index])
        {
            int index = 0;
            for (int i = 0; i < sortedArray.size(); i++)
            {
                if (sortedArray[i] == search)
                {
                    index = i;
                }
                
            }
            
            std::cout << "Number: " << search << " | Index: " << index << std::endl;
            result = true;
        }
        else{
            std::cout << "Error: element not present in array." << std::endl;
            result = true;
        }
    }
    
    return 0;
}