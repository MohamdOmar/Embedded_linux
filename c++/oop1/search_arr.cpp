#include <algorithm>
#include <iostream>


int main() {

    int arr[5] = {1,2,3,4,5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int target ;

    std::cout<<"Enter the number u are looking for: "<<std::endl;

    std::cin>>target;

    auto ans = std::find(arr, arr+n, target);

    if(ans != arr+n)
    {
        std::cout<<"The Number was found "<<std::endl;   
    }
    else {
        std::cout<<"The Number was NOT found "<<std::endl;
    }

    

    return 0;
}