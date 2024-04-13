#include<iostream>
#include <string>
#include <vector>

// class Person
// {
// public:
//     int p=100;
//     virtual void fun(){std::cout << "Person" << std::endl;}
// };

// class Omar : public Person
// {
// public:
//     int m=123;
//     void fun(){std::cout << "OMAR" << std::endl;}
// };

// class Mohamed : public Person
// {
// public:
//     int k=333;
//     void fun(){std::cout << "Mohamed" << std::endl;}
// };

// void display(Person * temp)
// {
//     temp->fun();
// }


//Interface: pure virtual function
// class Person
// {
// public:
//     int p=100;
//     virtual void fun()=0;  //pure virtual function
// };

// class Omar : public Person
// {
// public:
//     int m=123;
//     //must overwrite the fun()
//     void fun(){std::cout << "OMAR" << std::endl;}
// };

// class Mohamed : public Person
// {
// public:
//     int k=333;
//     void fun(){std::cout << "Mohamed" << std::endl;}
// };

// void display(Person * temp)
// {
//     temp->fun();
// }

template <typename T> void print(T x){std::cout << x << std::endl;}
 
int main() {
    // Person t;
    // Omar O;
    // Mohamed m;

    // Person *p=&O;
    // display(&m);
    // p= &m;
    // display(&O);

    std::string a{"Mohamed"};

    // std::string S{};
    // std::getline(std::cin,S);
    // std::cout << "S= "<< S << std::endl;

    const char* ptr= a.c_str();
    char * pt= a.data();
    a = a+a;
    print(a);
    print(a.length());
    print(a.empty());
    print(a.front());
    print(a.back());
    print(a.size());

    return 0;
}