 
// Take a day number (1–7) and print the corresponding day name. 


#include <iostream>

int main()
{
    int weeknum;
    std::cout << "Enter a week day number (1-7): ";
    std::cin >> weeknum;

    //we can also perform it by using switch case
    if(weeknum == 1) {
        std::cout << "Monday" << std::endl;
    }
    else if(weeknum == 2) {
        std::cout << "Tuesday" << std::endl;
    }
    else if(weeknum == 3) {
        std::cout << "Wednesday" << std::endl;
    }
    else if(weeknum == 4) {
        std::cout << "Thursday" << std::endl;
    }
    else if(weeknum == 5) {
        std::cout << "Friday" << std::endl;
    }
    else if(weeknum == 6) {
        std::cout << "Saturday" << std::endl;
    }
    else if(weeknum == 7) {
        std::cout << "Sunday" << std::endl;
    }
    else {
        std::cout << "Invalid input! Please enter a number between 1 to 7" << std::endl;
    }
}