#include <iostream>
#include <unistd.h>
#include <sys/types.h>


int main()
{
    std::cout << "UserID = "<< getuid()<< "\nUserName= "<< getlogin() << std::endl;
}