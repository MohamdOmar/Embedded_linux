
// C STYLE
// #include <iostream>

// void removeElement(int arr[], int size, int index) {
//   if (index < 0 || index >= size) {
//     std::cout << "Invalid index" << std::endl;
//     return;
//   }

//   for (int i = index; i < size - 1; i++) {
//     arr[i] = arr[i + 1];
//   }

//   size--;
// }

// int main() {
//   int arr[] = {1, 2, 3, 4, 5};
//   int size = sizeof(arr) / sizeof(arr[0]);

//   int indexToRemove = 2;

//   removeElement(arr, size, indexToRemove);

//   for (int i = 0; i < size; i++) {
//     std::cout << arr[i] << " ";
//   }

//   return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

void deleteNumber(std::vector<int>& vec, int numberToDelete) {
    auto it = std::find(vec.begin(), vec.end(), numberToDelete);

    if (it != vec.end()) {
        vec.erase(it);
        std::cout << "Number deleted successfully." << std::endl;
    } else {
        std::cout << "Number not found in the vector." << std::endl;
    }
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int numberToDelete = 3;

    std::cout << "Original Vector: ";
    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    deleteNumber(vec, numberToDelete);

    std::cout << "Modified Vector: ";
    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}