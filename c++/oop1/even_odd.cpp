#include <vector>
#include <iostream>


int main() 
{

    std::vector<int> arr = {2,3,4,6,7,8,9,13,15};

    std::vector<int> even_nums;

    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i]%2 ==0)
        {
            even_nums.push_back(arr[i]);
    
        }
    
    }

    std::vector<int> odd_nums;

    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] %2 !=0)
        {
            odd_nums.push_back(arr[i]);
        }
    }                   
    
    std::cout << "Even Numbers:" << std::endl;

    for (int num : even_nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd Numbers:" << std::endl;

    for (int num : odd_nums)
    {
        std::cout << num << " ";
    }

     std::cout << std::endl;


    return 0;
}