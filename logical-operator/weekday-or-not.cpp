// Take a weekday number (1–7) and determine if it is a weekday or weekend.

#include <iostream>

int main()
{
    int weekNum;
    std::cout << "Enter a week day(1-7): ";         //1 = Monday, 2 = Tuesday, 3 = Wednesday, so on...
    std::cin >> weekNum;

    switch(weekNum) {
        case 1: std::cout << "Monday is a week day" << std::endl;
                break;
        case 2: std::cout << "Tuesday is a week day" << std::endl;
                break;
        case 3: std::cout << "Wednesday isa week day" << std::endl;
                break;
        case 4: std::cout << "Thursday is a week day" << std::endl;
                break;
        case 5: std::cout << "Friday is a week day" << std::endl;
                break;
        case 6: std::cout << "Saturday is a Weekend" << std::endl;
                break;
        case 7: std::cout << "Sunday is a Weekend" << std::endl;
                break;
        default: std::cout << "Error! only enter 1 to 7" << std::endl;
                break;
    }

    //we can also write like this  
    /*switch(weekNum) {
        case 1: 
        case 2: 
        case 3: 
        case 4: 
        case 5: std::cout << "It's a week day" << std::endl;
                break;
        case 6: 
        case 7: std::cout << "It's a Weekend" << std::endl;
                break;
        default: std::cout << "Error! only enter 1 to 7" << std::endl;
                break;
    } */
    return 0;
}