#include <iostream>

int main()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if((year%4 == 0) && (year%100 == 0 || year%400 != 0))  //dividing with 4, 100, and 400 because we have to manage time                                                     // time properly
    {
        std::cout << year << " is a Leap year" << std::endl;
    }
    else{
        std::cout << year << " is not a Leap year" << std::endl;
    }
    return 0;
}