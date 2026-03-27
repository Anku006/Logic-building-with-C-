// Take two numbers and check if both are positive and their sum is less than 100.

#include <iostream>

int main()
{
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int sum = num1 + num2;

    if(num1 > 0 && num2 > 0) {
        if(sum > 0 && sum < 100) {
            std::cout << "Both numbers +ve and some is less than 100" << std::endl;
        } else {
            std::cout << "Both numbers +ve and some is greater than 100" << std::endl;
        }
    } else if(num1 > 0 && num2 < 0) {
        if(sum > 0 && sum < 100) {
            std::cout << "One number is +ve, another is -ve and sum is less than 100" << std::endl;
        } else {
            std::cout << "One number is +ve, another is -ve and sum is also -ve" << std::endl;
        }
    } else if(num1 < 0 && num2 > 0) {
        if(sum > 0 && sum < 100) {
            std::cout << "One number is +ve, another is -ve and sum is less than 100" << std::endl;
        } else {
            std::cout << "One number is +ve, another is -ve and sum is also -ve" << std::endl;
        }
    } else {
        std::cout << "Both numbers are zero" << std::endl;
    }
    return 0;
}