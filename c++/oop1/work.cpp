#include<iostream>


int main() 
{

    auto fn =[](int x,int y)->void
    {
        std::cout << x << std::endl;

        std::cout << y << std::endl;

    };

    fn(2, 3);


    return 0;
}

