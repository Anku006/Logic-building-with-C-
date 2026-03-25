// Check whether a given integer is single-digit, double-digit, or multi-digit.

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num >= 1 && num <= 9) {
        std::cout << num << " is a one digit number" << std::endl;
    } else if(num >= 10 && num <= 99) {
        std::cout << num << " is a two digit number" << std::endl;
    } else {
        std::cout << num << " is a multi-digit number" << std::endl;
    }
}