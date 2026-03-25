// Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’.

#include <iostream>

int main()
{
    char ch;
    std::cout << "Enter a alphabet: ";
    std::cin >> ch;

    if((ch >= 'A' && ch <= 'M') || (ch <= 'a' && ch <= 'm')) {
        std::cout << ch << " lies between A and M (if user enter small alphabet then lies in a and m)" << std::endl;
    } else if((ch >= 'N' &&  ch <= 'Z') || (ch >= 'n' && ch <= 'z')) {
        std::cout << ch << " lies between N and Z (if user enter small alphabet then lies in n and z)" << std::endl;
    } else {
        std::cout << "Invalid input! Please enter a alphabet" << std::endl;
    }
    return 0;
}