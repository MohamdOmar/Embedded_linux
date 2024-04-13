


#include <algorithm>
#include <bitset>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <iterator>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>


// int multi(int a, int b){
//     return a*b;
// }

// float multi(float a, float b){
//     return a*b;
// }

// void func(int x){std::cout<<"Hello!"<<x;}
// void (*func_ptr)(int) = &func;

// class A
// {
// public:
//     int x=10;
//     int y= 5;
//     void fun_a()
//     {
//         std::cout << "In Class A\n" << std::endl;
//     }
// };

// class B
// {
//     public:
//         int z=12;
//         int t= 7;
//         void fun_b()
//         {
//             std::cout << "In class B\n" << std::endl;
//         }
// };

// int getRandomNo()
// {
//     return  rand() % 10;
// }

// struct Data{
//     int temp;
// };

// enum class Traffic :unsigned char 
// {
//     RED,
//     YELLOW,
//     GREEN
// };

// class Data{
// public:
//     bool flag=1;
//     int value=0;

//     Data();
//     Data(bool flag);
//     Data(bool flag,int value);

//     void PrintInt()
//     {
//         std::cout << "In class A\n" << std::endl;
//     }
// };
// Data::Data()
// {
//     std::cout << "Defualt" << std::endl;
// }
// Data::Data(bool flag):Data()
// {
//     this->flag=flag;
//     std::cout << "1 param" << std::endl;
// }
// Data::Data(bool flag, int value):Data(flag)
// {
//     this->value= value;
//     std::cout << "2 param" << std::endl;
// }

// class Data
// {
//     const int value1;
//     const int value2=10;
// public:9
//     Data(int value1, int value2) : value1(value1),value2(value2)
//     {
//         this->value2=5;
//     }
// };


// class Data
// {
// private:
//     mutable int x=1;
// public:
//     Data(){}
//     void fun(int temp) const{
//         x=10;
//         int value;
//         value=temp;
//         temp=12;
//         std::cout << "Hello from const Method" << std::endl;
//     }
//     void method1(){
//         std::cout << "this->x = "<<this->x << std::endl;
//     }
// };

// class Data
// {
// public:
//     Data()
//     {
//         value++;
//     }
//     void print(){
//         std::cout << value2 << std::endl;
//         std::cout << value << std::endl;
//     }
//     static int valuep;
// private:
//     static int value;
//     static const int value2=5;
//     static const int value3;
// };
// int Data::value=0;
// int Data::valuep=1000;
// const int value3=50;

// class foo
// {
//     public:
//         static const int f;
// };
// void bar(const int& b)
// {
//     std::cout << b << std::endl;
// }
// const int foo::f =5; 

// class Complex
// {
// public:
//     Complex()=default;
//     Complex(int real, float img):real(real),img(img){}
//     int operator+(int num)
//     {
//         std::cout << "real" << std::endl;
//         return this->real +num;
//     }
//     float operator+(float num)
//     {
//         std::cout << "Imaginary" << std::endl;
//         return this->img+num;
//     }
//     Complex operator+(const Complex& temp)
//     {
//         Complex result;
//         result.real= this->real + temp.real;
//         result.img= this->img + temp.img;

//         return result;
//     }
//     bool operator<(const Complex& temp)
//     {
//         return (this->real < temp.real) && (this->img < temp.img);
//     }
//     int real_fun()
//     {
//         return this->real;
//     }
//     float img_fun()
//     {
//         return this->img;
//     }
//     int operator++()
//     {
//         this->real+=1;
//         std::cout << "Pre" << std::endl;
//         return this->real;
//     }
//     int operator++(int temp)
//     {
//         temp = this->real;
//         this->real++;
//         std::cout << "Post" << std::endl;
//         return temp;     
//     }
//     operator std::string(){
//         st= std::to_string(real)+" , "+std::to_string(img)+"j";
//         return st;
//     }
// friend int operator+(int value, Complex c);
// private:
// int real;
// float img;
// std::string st;

// };

// int operator+(int value, Complex c)
// {
//     return value+c.real;
// }


class String
{
private:
    char* str;
    int size;
public:
    String(): str(nullptr),size(0) {}
    String(char* str)
    {
        this->str= new char(size+1);
        strcpy(this->str, str);
    }
    String(const String& copy)
    {
        this->size=copy.size;
        this->str= new char(size+1);
        strcpy(this->str, copy.str);
        std::cout << "Copy Constructor" << std::endl;
    }

    String(String&& expired)
    {
        this->size=expired.size;
        expired.size = 0;
        this->str= new char(this->size +1);
        strcpy(this->str, expired.str);
        expired.str=nullptr;
    }
    String& operator=(const String& temp)
    {
        if(this!= &temp)
        {
            this->size=temp.size;
            if(this->str)
            {
                delete[] this->str;
            }
            this->str= new char(this->size +1);
            strcpy(this->str, temp.str);
        }
        return *this;
    }

    String& operator=(String&& expired)
    {
        if(this!= &expired)
        {
            this->size=expired.size;
            expired.size=0;
            if(this->str)
            {
                delete[] this->str;
            }
            this->str= new char(this->size +1);
            strcpy(this->str, expired.str);
            expired.str=nullptr;
        }
        return *this;
    }

    void fun()
    {
        std::cout << str << std::endl;
    }

};


int main() {
    // int result1= multi(3,2);
    // float result2= multi(3.5f,2.5);
    // std::cout<<result1<<std::endl;
    // std::cout<<result2<<std::endl;


    // int numb[3][3] = {{1,2,3},
    //                  {1,5,6},
    //                  {7,8,9}
    // };
    // for (int i=0; i<3; i++) 
    // {
    //     for (int j=0; j<3; j++)
    //     {
    //         std::cout<< numb[i][j]<< " ";
    //     }
    //     std::cout<<std::endl;
    // }

    // pointer to function
    //func_ptr(5);

    // int x=22;
    // int& ref= x;
    // std::cout<< "the value of ref is "<<ref<<std::endl;

    // int a =10;
    // char c= 'a';

    // int* q= (int*) &c;
    // char p= static_cast<char>(a);
    // std::cout << "value of q is " <<p << std::endl;

    // int* p = new int(65);
    // char* ch = reinterpret_cast<char*>(p);
    // char* x=new char(5);
    // int* ptr= reinterpret_cast<int*>(x);
    // std::cout << "ch = " << ch<< std::endl;
    // std::cout << "ptr = " << *ptr<< std::endl;

    // B* x= new B();

    // A* new_a = reinterpret_cast<A*>(x);

    // new_a->fun_a();
    // std::cout << new_a->x << std::endl;
    // std::cout << new_a->y << std::endl;

    // int arr[5]={10,12,5,7,4};
    // std::sort(std::begin(arr),std::end(arr),[](int first, int second){
    //     return first<second;
    // });

    // const int x = getRandomNo();
    // constexpr int y= getRandomNo();

    // std::string Name1="Mohamed";
    // std::string Nam2="Omar";

    // std::string Name = Name1+Nam2;

    // std::cout << "Name = " << Name<< std::endl;

    // int arr[]={10,12,310,200};
    // std::cout << * std::max_element(std::begin(arr),std::end(arr)) << std::endl;

    // std::sort(std::begin(arr),std::end(arr),[](auto first, auto secound){return first>secound;});

    // for (auto& i : arr) {
    //     std::cout << i << " " << std::endl;
    // }
    

    //1- all of them can assign value
    // int n;     // defult
    // int x=10;  // copy
    // int y(10); // Direct
    // int z{10}; // Value

    // //2-narrow conversion
    // float dec=3.5;
    // int value{dec};


    // //3-vexing parse
    // int v{};
    // int v2();
    // int v3=0;

    //4- synthesize constructor
    // Data d;
    // Data d2{};
    // std::cout << d.temp << std::endl;
    // std::cout << d2.temp << std::endl;

    // Traffic obj;
    // std::cout << (int)obj << std::endl;

    // std::cout << (int) Traffic::GREEN << std::endl;

    // int y= static_cast<int>(Traffic::RED);
    // //int x= Traffic::RED; //Error

    // Traffic obj2= static_cast<Traffic>(1);
    // std::cout << (int)obj2 <<" "<<std::endl;

    // Data d;

    // Data(5,2);

    // Data d;
    // d.fun(2);
    // d.method1();

    // const Data k;
    // k.fun(2);

    // Data d;
    // Data d2;
    // d.print();
    // std::cout << Data::valuep << std::endl;
    
    // foo k;

    // bar(foo::f);

    // std::string frame="Mohamed 12345 20.5";

    // std::string name;
    // int ID;

    // float score;

    // std::stringstream st(frame);
    // st>>name>>ID>>score;

    // std::cout << name << std::endl;
    // std::cout << ID << std::endl;
    // std::cout << score << std::endl;

    // int x=10;
    // std::cout << std::bitset<8>(x) << std::endl;

    // int s[]={5,7,3,2,6,1,10,52};

    // auto v = std::find(std::begin(s),std::end(s),5);

    // std::cout << v << std::endl;

    // Complex A(1,1.50);
    // Complex B(2,2.5);
    // Complex C{};

    // int reals=A+12;
    // float imgs=A+1.5f;
    // C=A+B;

    // std::vector<Complex>v{A,B,C};
    // std::sort(v.begin(),v.end());

    // for (Complex& i  : v) {
    //     std::cout <<"(" << i.real_fun() <<" , " ;
    //     std::cout << i.img_fun() << "i)"<<std::endl;
    // }

    // std::cout << reals << std::endl;
    // std::cout << imgs << std::endl;
    // std::cout << C.img_fun() << std::endl;
    // std::cout << C.real_fun() << std::endl;
    
   
    // int y = ++B;
    // int x = B++;

    // std::cout << y << std::endl;
    // std::cout << x << std::endl;

    // std::string str=B;
    // std::cout << str << std::endl;

    // int x=5+B;
    // std::cout << x << std::endl;

    char arr[]="Mohamed";
    String t1(arr);
    String t2(std::move(t1));

    t2.fun();
    t1.fun();

    std::cout << "End" << std::endl;

    return 0;
}