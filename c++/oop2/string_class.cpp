

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

        unsigned int str_Lenght()
        {
            return length;
        }

        const char* str_data() 
        {
            return data;
        }
        

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
    String str2("Omar");

    std::cout << "th lenght of str1 is: " <<str1.str_Lenght() << std::endl;
    std::cout << "Data of str1 is: " << str1.str_data()<< std::endl;
    return 0;
}