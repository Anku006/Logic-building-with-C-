// Take two angles of a triangle and compute the third angle.

#include <iostream>

int main()
{
    float ang1, ang2;
    std::cout << "Enter two angles to compute third: ";
    std::cin >> ang1 >> ang2;

    float ang3 = 180 - (ang1 + ang2);     //sum of angles of a triangle is 180 degree

    std::cout << ang3 << " is third angle of triangle" << std::endl;
    return 0;
}