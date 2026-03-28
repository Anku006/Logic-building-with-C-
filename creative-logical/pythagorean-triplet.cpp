// Take three numbers and check if they can form a Pythagorean triplet. 

#include <iostream>

int max_side(int x, int y, int z) {
    int max;

    //give hypotenuse from the x, y, z or we say provide maximum
    if(x > y && x > z) {
        max = x;
    } else if(y > x && y > z) {
        max = y;
    } else {
        max = z;
    }

    return max;
}

int main()
{
    int num1, num2, num3;
    std::cout << "Enter three sides: ";
    std::cin >> num1 >> num2 >> num3;

    if(num1 < 0 || num2 < 0 || num3 < 0) {
        std::cout << "Sides can't be negative" << std::endl;
        return -1;
    }

    int max = max_side(num1, num2, num3);

    if(max == num1 && ((num2 * num2) + (num3 * num3) == num1 * num1)) {
        //if hypotenuse is num1 and satisfy expression
        std::cout << "(" << num1 << ", " << num2 << ", " << num3 << ")" << " is a Triplet" << std::endl;
    } else if(max == num2 && ((num1 * num1) + (num3 * num3) == num2 * num2)) {
        //if hypotenuse is num2 and satisfy expression
        std::cout << "(" << num1 << ", " << num2 << ", " << num3 << ")" << " is a Triplet" << std::endl;
    } else if(max == num3 && ((num1 * num1) + (num2 * num2) == num3 * num3)) {
        //if hypotenuse is num2 and satisfy expression
        std::cout << "(" << num1 << ", " << num2 << ", " << num3 << ")" << " is a Triplet" << std::endl;
    } else {
        //if all conditions fails
        std::cout << "(" << num1 << ", " << num2 << ", " << num3 << ")" << " is not a Triplet" << std::endl;
    }
    return 0;
}