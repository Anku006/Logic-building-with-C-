// Print the factorial of a given number. 

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num < 0) {
        std::cout << "Error! Number can't be negative." << std::endl;
        return 0;
    }

    if(num == 0 || num == 1) {
        std::cout << "Factorial of " << num << " is 1" << std::endl;
        return 0;
    }

    int fact = 1, i = 1;

    while(num >= i) {
        fact = fact * i;
        i++;
    }

    std::cout << "Factorial of " << num << " is: " << fact << std::endl; 

    return 0;
}