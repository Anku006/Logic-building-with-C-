// Take three numbers and print the median value (neither maximum nor minimum).

#include <iostream>

int main()
{
    int num1, num2, num3;
    std::cout << "Enter three number to calculate median: ";
    std::cin >> num1 >> num2 >> num3;

    if((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3)) {      //checking number1 range
        std::cout << num1 << " is median" << std::endl;
    } else if((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 <= num3)) {       //checking number2 range
        std::cout << num2 << " is the median" << std::endl;
    } else {
        std::cout << num3 << " is the median" << std::endl;
    }
    return 0;
}