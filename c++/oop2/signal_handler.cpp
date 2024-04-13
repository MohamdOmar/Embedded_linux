
#include <csignal>
#include <cstdlib>
#include <iostream>
#include <new>


void signal_Handler(int signal)
{
    if (signal == SIGINT)
    {
        std::cout << " Interrupt signal recived. Exiting...." << std::endl;


        exit(signal);
    }
}


int main() 
{
    signal(SIGINT , signal_Handler);

    while (true) {
        //...
    }
    return 0;
}