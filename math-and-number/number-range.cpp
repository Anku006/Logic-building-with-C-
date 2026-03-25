// Check if a number lies within the range [100, 999].

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num >= 100 && num <= 999) {
        std::cout << "Number lies within the range" << std::endl;
    } else {
        std::cout << "Number not lies within the range" << std::endl;
    }
    return 0;
}