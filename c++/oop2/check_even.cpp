// #include <iostream>
// #include <vector>
// int main() {
                                                                                         /* my solutiom */
//     std::vector<int> arr = {2,4,6};                                     

//     int even = 1;
//     for (int num : arr) 
//     {
//         if (num%2 != 0)
//         {
//             even = 0;
//             break;
//         }
//     }
//     if (even==1)
//     {
//         std::cout << "The array is all even" << std::endl;
//     }
//     else {
//         std::cout << "The array is not all even" << std::endl;
//     }

//     return 0;
// }

#include <iostream>

                                                                                         /* Online solutiom */
bool isAllEven(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            return false;  // Found an odd element, not all even
        }
    }
    return true;  // All elements are even
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isAllEven(arr, size)) {
        std::cout << "All elements are even." << std::endl;
    } else {
        std::cout << "Not all elements are even." << std::endl;
    }

    return 0;
}