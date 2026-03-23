#include <iostream>

int main() 
{
    int hour;
    std::cout << "Enter a hour for greet between 0-23: ";
    std::cin >> hour;

    if(hour >= 0 && hour < 12) {
        std::cout << "Good Morning" << std::endl;
    } else if(hour >=12 && hour < 17) {
        std::cout << "Good Afternoon" << std::endl;
    } else if(hour >= 17 && hour < 21) {
        std::cout << "Good Evening" << std::endl;
    } else {
        std::cout << "Good Night" << std::endl;
    }
    return 0;
}