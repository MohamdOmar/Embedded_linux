
#include <algorithm>
#include <cstring>
#include <iostream>
class String
{
    public:
        String():data(nullptr),length(0){}
        String(const char* str):data(nullptr),length(0)
        {   
            //length = std::strlen(str);   
            length = GetLen(str);

            data = new char(length+1);  
            
            //std::strcpy(data, str);
            copy_str(data, str);

            // while (*str != '\0') {
            //     *data = *str;
            //     length++;
            //     data++;
            //     str++;
            // }
        }

        String(String& other)
        {
            this->length = other.length;
            this->data = new char(length+1);
            strcpy(this->data, other.data);
            std::cout << "Copy Constructor is Called" << std::endl;
        }

        String& operator=(String& other)
        {
            if (&other != this)
            {
                this->length = other.length;

                if (this->data)
                {
                    delete [] data;
                }    
                this->data = new char(this->length+1);                    //this->lenght or other.length ; both are the same
                strcpy(this->data, other.data);

                std::cout << "Copy Operator is Called" << std::endl;
            }
            return *this;
        }

        String(String&& other)
        {
            this->length = other.length;
            other.length = 0;
            
            this->data = other.data;
            other.data = nullptr;
            std::cout << "Move Constructor called" << std::endl;
        }

        String& operator=(String&& other)
        {
            if (&other != this)
            {
                this->length = other.length;
                other.length=0;
                if (this->data)
                {
                    delete [] data;
                }
                this->data = other.data;
                other.data=nullptr;
                std::cout << "Move Operator called" << std::endl;
            }
            return *this;
        }


        unsigned int str_Lenght()
        {    return length; }

        const char* str_data() 
        {     return data; }
        

    private:
        unsigned int length;
        char* data;

        unsigned int GetLen(const char* start)
        {
            unsigned int len=0;
            
            while (*start != '\0') {
                len++;
                start++;
            }
            return len ;
        }
        void copy_str(char* dis, const char* ref)
        {
            while (*ref != '\0') {
                *dis = *ref;
                dis++;
                ref++;
            }

        }

};


int main() {
    String str1("Mohamed");
    String str2 ;

    str2 = std::move(str1);

    // std::cout << "th lenght of str1 is: " <<str1.str_Lenght() << std::endl;
    // std::cout << "Data of str1 is: " << str1.str_data()<< std::endl;
    return 0;
}