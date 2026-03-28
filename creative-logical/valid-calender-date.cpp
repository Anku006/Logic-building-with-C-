// Take day and month and check if it forms a valid calendar date (ignoring leap years).

#include <iostream>

int main()
{
    int month, date;
    std::cout << "Enter month(1-12) and press Enter: ";
    std::cin >> month;
    std::cout << "Enter date(1-31): ";
    std::cin >> date;

    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
        if(date >= 1 && date <= 31) {
            std::cout << "Valid calender date." << std::endl;
        }
            break;

        case 2: if(date >= 1 && date <= 28) {  //not taking leap year
            std::cout << "valid calender date." << std::endl;
        }
            break;
        
        case 4: case 6: case 9: case 11: 
        if(date >= 1 && date <= 30) {
            std::cout << "valid calender date." << std::endl;
        }
            break;

        default: std::cout << "Error! Enter month and date within range." << std::endl;

    }
    return 0;
}