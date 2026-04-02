// Check if a number is a palindrome.

#include <iostream>

int main()
{
    int num, palindNum = 0, rem;
    std::cout << "Enter a number to check palindrom: ";
    std::cin >> num;

    if(num < 0) {
        std::cout << "Error! Negative numbers are not palindrom" << std::endl;
    }
    int temp = num;
    
    while(temp > 0) {
        rem = temp%10;
        palindNum = (palindNum * 10) + rem;
        temp = temp/10;
    }

    if(num == palindNum) {      //chekcing original number is equal to reverse number
        std::cout << num << " is a Palindrom number." << std::endl;
    } else {
        std::cout << num << " is not a Palindrom number." << std::endl;
    }
    return 0;
}