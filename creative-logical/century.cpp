//  Take a year and print the corresponding century (e.g., “19th century”, “20th century”).

#include <iostream>

int main()
{
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;

    if(year <= 0) {
        std::cout << "Invalid year!" << std::endl;
        return 0;
    }

    int century = (year - 1) / 100 + 1;     //calculating century

    std::cout << century;

    //handling suffix
    if(century % 10 == 1 && century % 100 != 11)    //checking last digit
        std::cout << "st Century";
    else if(century % 10 == 2 && century % 100 != 12) //cheking last digit
        std::cout << "nd Century";
    else if(century % 10 == 3 && century % 100 != 13) //checking last digit
        std::cout << "rd Century";
    else
        std::cout << "th Century";
    return 0;
}