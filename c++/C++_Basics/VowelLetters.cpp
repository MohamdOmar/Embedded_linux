#include<iostream>
#include<cmath>



bool vowelLetter(char letter)
{

    return  ((letter == 'a') || (letter == 'o') || (letter == "e") || (letter == "i") || (letter == "u")
            (letter == 'A') || (letter == 'O') || (letter == "E") || (letter == "I") || (letter == "U")) ; 
    
}

int main() 
{
    char x
    std::cout << "Pleaze enter the Letter:  ";
    std::cin>> x ;

    bool isVowel= vowelLetter(x);

    if (isVowel == 1)
    {
        std::cout << x <<" --> is Vowel" << std::endl;
    }
    else
    {
        std::cout << x <<" --> is Not Vowel" << std::endl;
    }


    return 0;
}

