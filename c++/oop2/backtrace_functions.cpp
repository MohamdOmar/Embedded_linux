

#include <iostream>
#include <string>
#include <vector>
class BackTrace
{
    public:
        BackTrace(std::string name) :name(name)
        {
            std::cout << "Enter to : " <<name<< std::endl; 
            func_list.push_back(name);
        }
        ~BackTrace()
        { 
            std::cout << "Exit from: " << name << std::endl;
            func_list.pop_back();
        }

        static void PrintBackTrace();

    private:

        std::string name;

        static std::vector<std::string> func_list ;

};
    std::vector<std::string> BackTrace::func_list;
    
    void BackTrace::PrintBackTrace() {
        for (int i = 0; i < func_list.size(); i++) {
            std::cout << i << "- " << func_list[i] << std::endl;
            }
            
    }


void fun2(int x);
void fun3(int x);

void fun1(int x)
{
    BackTrace b(__PRETTY_FUNCTION__);

    fun2(2);
}

void fun2(int x)
{
    BackTrace b(__PRETTY_FUNCTION__);

    fun3(3);

}

void fun3(int x)
{
    BackTrace b(__PRETTY_FUNCTION__);

    BackTrace::PrintBackTrace();

}


int main() 
{
    BackTrace b(__PRETTY_FUNCTION__);
    fun1(1);

    BackTrace::PrintBackTrace();

    return 0;
}