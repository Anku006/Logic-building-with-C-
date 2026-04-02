// Find the sum of digits of a number. 

#include <iostream>

int main()
{
    int num, digits, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int temp = num;
    while(temp > 0) {
        digits = temp%10;
        sum += digits;
        temp = temp/10;
    }

    std::cout << "Sum of digits of number " << num << " is: " << sum << std::endl;
    return 0;
}