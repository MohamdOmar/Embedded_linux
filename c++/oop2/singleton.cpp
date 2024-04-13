
#include <iostream>


class Data{
    public:

    static Data &getInstance(){

        static Data d;

        return d;
    };
    

    // run on the terminal "valgrind --leak-check=full --show-leak-kinds=all  ./a.out"
    // to see why the method below is not used
    // "new" used without "delete"
        // static Data *getInstance(){

        //     if (ptr == nullptr)
        //     {
        //         ptr = new Data();
        //     }
        //     return ptr;
        // };


    void display(){ std::cout << "Hello World" << std::endl;}

    private:
        Data(){

        };

    static Data *ptr; 
};

Data* Data::ptr = nullptr;


int main() {
    //Data::getInstance()->display();

    Data::getInstance().display();

    return 0;
}