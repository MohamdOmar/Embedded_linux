#include <algorithm>
#include <iostream>
#include <ostream>
#include <pstl/glue_algorithm_defs.h>
#include <vector>


int main() {

    int arr1[] = {5,10,8,9,1,8};

    int arr2[] = {3,2,1};

    int size1= sizeof(arr1) / sizeof(arr1[0]);
    int size2= sizeof(arr2) / sizeof(arr2[0]);


    std::vector<int> merged;

    merged.resize(size1+size2);

    std::copy(arr1, arr1+size1, merged.begin());

    std::copy(arr2,arr2+size2,merged.begin()+size1);

    std::cout << "The merged array:" << std::endl;

    for(int num : merged)
    {
        std::cout << num <<" ";
    }

    std::cout << std::endl;
    return 0;
}