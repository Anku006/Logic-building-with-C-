// Take a character and check if it is a letter, a digit, or neither.

#include <iostream>

int main()
{
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        std::cout << ch << " is a letter" << std::endl;
    } else if(ch >= '0' && ch <= '9') {
        std::cout << ch << " is a digit" << std::endl;
    } else {
        std::cout << "Neither digit nor letter" << std::endl;
    }
    return 0;
}