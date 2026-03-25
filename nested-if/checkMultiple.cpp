// Check if one of two given numbers is a multiple of the other. 

#include <iostream>

int main() {

    int num1, num2;
    std::cout << "Enter two numbers to check multiple: ";
    std::cin >> num1 >> num2;

    if(num1%num2 == 0)
    {
        std::cout << num1 << " is a multiple of " << num2 << std::endl;
    } else if(num2%num1 == 0) {
        std::cout << num2 << " is a multiple of " << num1 << std::endl;
    } else {
        std::cout << "Neihter number is a multiple" << std::endl;
    }
    return 0;
}