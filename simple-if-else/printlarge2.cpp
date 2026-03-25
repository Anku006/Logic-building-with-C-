// Take three numbers and print the largest.

#include <iostream>

int main()
{
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    if((num1 > num2) && (num1 > num3))
    {
        std::cout << num1 << " is larger from " << num2 << " and " << num3 << std::endl;
    }
    if(num2 > num1 && num2 > num3)
    {
        std::cout << num2 << " is larger from " << num1 << " and " << num3 << std::endl;
    }
    if(num3 > num1 && num3 > num2)
    {
        std::cout << num3 << " is larger from " << num1 << " and " << num2 << std::endl;
    }
    return 0;
}