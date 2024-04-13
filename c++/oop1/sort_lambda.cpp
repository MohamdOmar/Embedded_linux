

#include <algorithm>
#include <iostream>
#include <vector>
int main() 
{
    std::vector<int> arr = {10,5,7,15,1,20};

    std::sort(arr.begin(), arr.end(), [](int a, int b)-> bool{ return a < b;} );

    std::cout << "The Array after sorting" << std::endl;

    for (int num : arr) 
    {
        std::cout << num <<" ";
    }

    std::cout << std::endl;


    return 0;
}