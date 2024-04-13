#include<iostream>



bool isRightTriangle(double side1, double side2, double side3)
{
    double side1Squared= side1 * side1;
    double side2Squared= side2 * side2;
    double side3Squared= side3 * side3;


    return   (side1Squared == side2Squared + side3Squared) ||
               (side2Squared == side1Squared + side3Squared) ||
               (side3Squared == side1Squared + side2Squared);
                
}

int main() 
{
    double x,y,z;
    std::cout << "Pleaze enter the sides of the traingle:  ";
    std::cin>> x >> y >> z ;

    bool isRight = isRightTriangle(x,y,z);

    if (isRight == 1)
    {
        std::cout << "The traingle is Right" << std::endl;
    }
    else
    {
        std::cout << "The traingle is Not Right" << std::endl;
    }


    return 0;
}

