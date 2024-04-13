

#include <iostream>
int main() 
{

    int num;

    std::cout << "Enter the number: " << std::endl;

    std::cin>>num;

    auto square_lambda= [](int x)
    {
        return  x*x;
    };

    int num_square = square_lambda(num);

    std::cout << "The square of the num is: "<< num_square<<std::endl;



    return 0;
}