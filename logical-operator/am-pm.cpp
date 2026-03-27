//  Take 24-hour time (hours and minutes) and print whether it is AM or PM. 

#include <iostream>

int main()
{
    int hour, minutes;
    std::cout << "Enter time hour(0-24): ";
    std::cin >> hour;
    std::cout << "Enter minutes: ";
    std::cin >> minutes;


    if((hour >= 0 && hour < 12) && (minutes >= 0 && minutes < 60)) {            
        std::cout << "Time: " << hour << ":" << minutes << " AM" << std::endl;
    } else if((hour >= 12 && hour < 24) && (minutes >= 0 && minutes < 60)) {
        std::cout << "Time: " << hour << ":" << minutes << " PM" << std::endl;
    } else {
        std::cout << "Error! Enter valid time only!" << std::endl;
    }

    // Note:- We can also solve it by nested if-else
    return 0;
}