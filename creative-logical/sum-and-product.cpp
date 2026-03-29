//Take an integer (1–9999) and check if the sum of its digits is greater than the product 
//of its digits. 

#include <iostream>

int main()
{
    int num, digits, pDigits, sum = 0, product = 1;

    std::cout << "Enter a number between(1-9999): ";
    std::cin >> num;

    while(num > 0) {
        digits = num%10;
        sum = sum + digits;
        product = product * digits;
        num = num/10;
    }

    std::cout << "Sum of digits: " << sum << std::endl;
    std::cout << "Product of digits: " << product << std::endl;

    if(sum > product) {
        std::cout << "Sum is greater than Product." << std::endl;
    } else {
        std::cout << "Product is greater than Sum." << std::endl;
    }
    return 0;
}