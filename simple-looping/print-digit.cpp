//  Print the product of digits of a given number.

#include <iostream>

int main()
{
    int num, prod = 1, rem; //rem store remainder of number
    std::cout << "Enter a number: ";
    std::cin >> num;
    int temp = num;
    for(int i = 1; i < temp; i++) {
        rem = temp%10;
        prod = prod * rem;
        temp = temp/10;
    }

    std::cout << "Product of " << num << " digits is: " << prod << std::endl;
    return 0;
}