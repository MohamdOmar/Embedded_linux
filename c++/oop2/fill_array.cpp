


#include <cstdio>
#include <iostream>
#include <vector>

std::vector<int> arr;

int main(int argc, const char** argv) {

    for (size_t i = 0; i <= 10000-10; i++)
    {
        arr.push_back(i+10);
        std::cout << arr[i] << " ";
    }


    return 0;
}