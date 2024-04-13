
#include <iostream>
#include <vector>
bool check_any_even(const std::vector<int> &arr)
{
    for (int num : arr) {
        if (num %2 ==0)
        {
            return true;
        }
    }

    return false;
}


int main() {
    std::vector<int> arr={1,2,3,5};

    if (check_any_even(arr))
    {
        std::cout << "There is at least one even number" << std::endl;
    }
    else {
        std::cout << "No Even Numebrs" << std::endl;
    }
    return 0;
}

