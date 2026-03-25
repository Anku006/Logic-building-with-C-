// Check if a number is a multiple of 7 or ends with 7.

#include <iostream>

int main()
{
    int num;
    int d;          //Holds last digit of the number
    std::cout << "Enter a number: ";
    std::cin >> num;

    d = num%10;

    if(num%7 == 0 && d == 7) {
        std::cout << num << " is a multiple of 7 and also ends with 7" << std::endl;
    } else if(num%7 == 0) {
        std::cout << num << " is a multiple of 7" << std::endl;     
    } else if(d == 7 || d == -7) {                                  //this handles negative digit case
        std::cout << num << " is ends with 7" << std::endl;
    } else {
        std::cout << num << " is not a multiple of 7" << std::endl;
    }
    return 0;
}