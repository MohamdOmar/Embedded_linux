

#include <algorithm>
#include <iostream>
#include <vector>
class Int{
    public:
        int *ptr;
        int x;

        std::vector<Int> v;
        
        Int() {}
        Int(int* ptr) : ptr(ptr) {std::cout << "Param" << std::endl;}
        Int(const Int& other) { 
            std::cout << "Copy Constructor" << std::endl;
            this->ptr = new int(*other.ptr); }

        Int& operator=(const Int& other)
        {
            if (this != &other)
            {
                this->x = other.x;
                if (this->ptr)
                {
                    delete ptr; 
                }
                this->ptr = new int(*other.ptr);
            }
            return *this;
        } 

        Int(Int&& other)
        {
            if (other.ptr)
            {
                this->ptr = other.ptr;
                other.ptr = nullptr;
            }
            this->x = other.x;
        }

        Int& operator=(Int&& other)
        {
            if (&other != this)
            {
                //primitive
                this->x = other.x;
                this->v = std::move(other.v);
                other.x=0;
                if (this->ptr)
                {
                    delete ptr;                    
                }
                this->ptr = other.ptr;
                other.ptr = nullptr;
            }
            return *this;
        }

        ~Int()
        {
            if (ptr)
            {
                delete ptr;
                ptr = nullptr;    
            }         
        }

};

Int getInt()
{
    Int i(new int(5));
    return i;
}

int main() {
    Int i(new int(5));
    //Int i2(i);
    //Int i2(getInt());
    // Int i2;
    // i2 = i;
    // *(i2.ptr) = 10;
    // std::cout << *(i2.ptr) << std::endl;

    // std::string source = "Hello, World!";
    // std::string destination = std::move(source);

    // std::cout << "Source: " << source << std::endl;          // Undefined behavior
    // std::cout << "Destination: " << destination << std::endl; // Prints "Hello, World!"

    //Int i2(std::move(i));

    Int I2;
    I2 =std::move(i);

    return 0;
}