// Count the number of digits in a given number.

#include <iostream>

int main()
{
    int num, rem, count = 0; //initialize count with zero because number digit not count yet
    std::cout << "Enter a number: ";
    std::cin >> num;
    int temp = num;
    while(temp > 0) {
        rem = temp%10;      //extracting last digit
        count++;            //increasing count by 1
        temp = temp/10;     //updating number
    }

    std::cout << "Digits in number " << num << " are: " << count << std::endl;
    return 0;
}