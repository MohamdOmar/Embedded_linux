

#include<iostream>


int main() {

    std::cout << "ASCII Code Table:" << std::endl;

    std::cout << "+******+*******+" << std::endl;

    std::cout << "| Char | ASCII |" << std::endl;

    std::cout << "+******+*******+" << std::endl;


    for (unsigned char i=0; i < 255; i++)
    {
        printf("|   %c   |   %d   |\n",i,i);
    }



    return 0;
}

