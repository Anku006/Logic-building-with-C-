#include <iostream>

int main()
{
    int side1, side2, side3;
    std::cout << "Enter three sides of triangle: ";
    std::cin >> side1 >> side2 >> side3;

    if((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
        std::cout << "The input Sides create a valid triangle and it's a: " << std::endl;
        if(side1 == side2 == side3) {
            std::cout << "Equilateral Triangle" << std::endl;
        }
        else if((side1 == side2) || (side2 == side3) || (side3 == side1)) {
            std::cout << "Isosceles Triangle" << std::endl;
        } else {
            std::cout << "Scalene Triangle" << std::endl;
        }
    } else {
        std::cout << "The input Sides not create a valid triangle and it's a: " << std::endl;
        std::cout << "Scalene Triangle" << std::endl;
    }
    return 0;
}