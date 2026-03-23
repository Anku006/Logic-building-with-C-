#include <iostream>

int main()
{
    int num1, num2; 
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if((num1%2 == 0) && (num2%2 != 0)) {
        std::cout << num1 << " is a Even number. But " << num2 << " is not" << std::endl;
    } else if((num1%2 != 0) && (num2%2 == 0)) {
        std::cout << num2 << " is a Even number. But " << num1 << " is not" << std::endl;
    } else if((num1%2 == 0) && (num2%2 == 0)) {
        std::cout << "Both numbers are Even" << std::endl;
    } else {
        std::cout << "Both numbers are Odd" << std::endl;
    }
    return 0;
}