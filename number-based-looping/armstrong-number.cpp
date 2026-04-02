// Check if a number is an Armstrong number.

//armstrong number is
//num = 153 -> if (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3) = 153

#include <iostream>

int main()
{
    int num, armSum = 0, rem;
    std::cout << "Enter a three digit number to check armstrong: ";
    std::cin >> num;

    //length of digit decide remainder multiplying how much times
    //e.g. num = 1234 if (1 * 1 * 1 * 1) + (2 * 2 * 2 * 2) + (3 * 3 * 3 * 3) + (4 * 4 * 4 * 4) == 1234
    int temp = num;
    while(temp > 0) {
        rem = temp%10;
        armSum += (rem * rem * rem);    //multiplying remainder 3 times and add to armSum
        temp = temp/10;
    }

    if(num == armSum) {
        std::cout << num << " is a Armstrong number" << std::endl;
    } else {
        std::cout << num << " is not a Armstrong number" << std::endl;
    }
    
    return 0;
}