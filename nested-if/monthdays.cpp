// Take a month number (1–12) and print the number of days in that month (ignore leap year).

#include <iostream>

int main()
{
    int month;
    std::cout << "Enter a month number (1-12): ";
    std::cin >> month;
    
    //we can aslo print month names instead of just month number
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        std::cout << month << " number month has 31 days" << std::endl;
    } else if(month == 4 || month == 6 || month == 9 || month == 11) {
        std::cout << month << " number month has 30 days" << std::endl;
    } else if(month == 2) {
        std::cout << month << " number month has 28 days" << std::endl;  //we are not considering leap year
    } else {
        std::cout << "Invalid input! please enter month number between 1 to 12" << std::endl;
    }
    return 0;
}