//Take two dates (day and month) and determine which one comes first in the 
// calendar.

#include <iostream>

int main()
{
    int month1, month2, date1, date2;
    std::cout << "Enter first date (month and date): ";
    std::cin >> month1 >> date1;
    std::cout << "Enter second date (month and date): ";
    std::cin >> month2 >> date2;

    if(month1 < 1 || month1 > 12 || month2 < 1 || month2 > 12) {
        std::cout << "Error! Enter month within range(1-12)." << std::endl;
        return 0;
    }  

    if(date1 < 1 || date1 > 31 || date2 < 1 || date2 > 31) {
        std::cout << "Error! Enter date within range(1-31)." << std::endl;
        return 0;
    }

    if(month1 < month2) {
        std::cout << "Date first comes first." << std::endl;
    } else if(month1 > month2) {
        std::cout << "Date second comes first." << std::endl;
    } else { // same month
        if(date1 < date2) {
            std::cout << "First date comes first." << std::endl;
        }
        else if(date1 > date2) {
            std::cout << "Second date comes first." << std::endl;
        }
        else {
            std::cout << "Both dates are the same." << std::endl;
        }
    }
    return 0;
}