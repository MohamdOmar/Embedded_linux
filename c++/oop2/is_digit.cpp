


#include <cctype>
#include <iostream>
int main() {

    char ch = '5';

    if (std::isdigit(ch))
    {
        std::cout << "The character is a digit" << std::endl;
    }
    else {
        std::cout << "The character is NOT a digit " << std::endl;
    }
    return 0;
}