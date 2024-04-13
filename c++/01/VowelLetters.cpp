#include<iostream>



bool vowelLetter(char letter)
{
    letter = std::tolower(letter);

    // Check if the letter is a vowel
    return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
}

int main() 
{
    char x ;
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

