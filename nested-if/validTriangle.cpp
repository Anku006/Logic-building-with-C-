// Take three sides and check if they form a valid triangle.

#include <iostream>

int main()
{
    int side1, side2, side3;
    std::cout << "Enter three sides of a triangle: ";        //valid triangle means {a + b > c
    std::cin >> side1 >> side2 >> side3;                    //b + c > a
                                                            //c + a > b } 
    if((side1 + side2 > side3) && (side2 + side3 > side1)   //then only it's a valid triangle
        && (side3 + side1 > side2)) {
            std::cout << "Valid Triangle" << std::endl;
    } else {
        std::cout << "Not a valid triangle" << std::endl;
    }
    return 0;
}