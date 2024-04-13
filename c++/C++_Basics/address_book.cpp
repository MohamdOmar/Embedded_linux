
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>


std::vector<std::string> book;


void Add()
{
    std::string str;
    std::cout << "Enter the name" << std::endl;
    std::cin>>str;

    book.push_back(str);

}


void Delete()
{
    std::string str;
    std::cout << "Enter the name" << std::endl;
    std::cin>>str;

    auto check = std::find(book.begin(), book.end(),str);
    
    if (check != book.end())
    {
        auto it = std::remove(book.begin(), book.end(), str);
        book.erase(it, book.end());
    }
    else
    {
        std::cout << "There NO such a Contact in the book" << std::endl;
    }

    
}

void Search()
{
    std::string str;
    std::cout << "Enter the name to search for it" << std::endl;
    std::cin>>str;


    auto it = std::find(book.begin(), book.end(),str);

    
    if (it == book.end())
    {
        std::cout << "The Contact was NOT found" << std::endl;
    }
    else
    {
        int index = std::distance(book.begin(), it);
        std::cout << "The contact "<< str <<" exists and has the index of: " << index <<std::endl;
    }


}

void Delete_all(std::string)
{

}


int main() {

    std::cout << "Welcome to your favorite address book!" << std::endl;

    int close = 0;
    while (1)
    {
        std::cout << "What do you want to do?" << std::endl;    

        std::cout << "   | 1-list       | list all users" << std::endl;
        std::cout << "   | 2-Add        | Add an user" << std::endl;
        std::cout << "   | 3-Delete     | Delets an user" << std::endl;
        std::cout << "   | 4-Delete all | Delete all users" << std::endl;
        std::cout << "   | 5-Search     | Search on a user" << std::endl;
        std::cout << "   | 6-Close      | Close the address book" << std::endl;

        int chooise;
        std::cin>> chooise;
        switch (chooise) {

            case 1:
                if (book.empty())
                {
                    std::cout << "No contacts found" << std::endl;
                }
                else{
                    for (std::string cont : book) {
                        std::cout <<cont << std::endl;
                    }
                }
                break;

            case 2:
                Add();    
                break;

            case 3:
                Delete();
                break;

            case 4:
                break;

            case 5:
                Search();
                break;

            case 6:
                std::cout << "Thank you.....Good bye" << std::endl;  
                close = 1;
                break;
  
        }
        if(close == 1)
        {
            break;
        }
    }
    

    return 0;
}