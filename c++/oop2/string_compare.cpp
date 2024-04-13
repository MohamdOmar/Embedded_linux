

#include <algorithm>
#include <cctype>
#include <iostream>
#include <iterator>
#include <string>

bool compare_strings(const std::string& str1, const std::string& str2)
{

    std::string str1_cpy{str1};
    std::string str2_cpy{str2};

    std::transform(std::begin(str1_cpy), std::end(str1_cpy), std::begin(str1_cpy),[](unsigned char c) {return toupper(c) ;});
    std::transform(std::begin(str2_cpy), std::end(str2_cpy), std::begin(str2_cpy),[](unsigned char c) {return toupper(c) ;});

    return str1_cpy == str2_cpy;

}


int main() 
{
    std::string str1 = "Mohamed";
    std::string str2 = "mohAmeD";

    if (compare_strings(str1, str2))
    {
        std::cout << "Strings are the same" << std::endl;
    }
    else
    {
        std::cout << "Strings are NOT the same" << std::endl;
    }

    return 0;
}