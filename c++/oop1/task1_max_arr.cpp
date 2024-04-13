#include <algorithm>
#include<iostream>

int main() {

    int arr[5]= {10,5,15,40,3,};

    int n = sizeof(arr) / sizeof(arr[0]) ;

    auto max= std::max_element(arr, arr+n);

    std::cout<<"The maximum element in the array is: "<< *max <<std::endl;
    

    return 0;
}   