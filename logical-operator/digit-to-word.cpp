// Take a single digit (0–9) and print its word form (“Zero” to “Nine”). 

#include <iostream>

int main()
{
    int digit;
    std::cout << "Enter a digit: ";
    std::cin >> digit;


    //using swicth-case
   /* switch(digit) {
        case 0: std::cout << "Zero" << std::endl;
                break;
        case 1: std::cout << "One" << std::endl;
                break;
        case 2: std::cout << "Two" << std::endl;
                break;
        case 3: std::cout << "Three" << std::endl;
                break;
        case 4: std::cout << "Four" << std::endl;
                break;
        case 5: std::cout << "Five" << std::endl;
                break;
        case 6: std::cout << "Six" << std::endl;
                break;
        case 7: std::cout << "Seven" << std::endl;
                break;
        case 8: std::cout << "Eight" << std::endl;
                break;
        case 9: std::cout << "Nine" << std::endl;
                break;
        default: std::cout << "Error! Enter single digit only!" << std::endl;
                break;
    } */

    //using if-else
    if(digit == 0) {
        std::cout << "Zero" << std::endl;
    } else if(digit == 1) {
        std::cout << "One" << std::endl;
    } else if(digit == 2) {
        std::cout << "Two" << std::endl;
    } else if(digit == 3) {
        std::cout << "Three" << std::endl;
    } else if(digit == 4) {
        std::cout << "Four" << std::endl;
    } else if(digit == 5) {
        std::cout << "Five" << std::endl;
    } else if(digit == 6) {
        std::cout << "Six" << std::endl;
    } else if(digit == 7) {
        std::cout << "Seven" << std::endl;
    } else if(digit == 8) {
        std::cout << "Eight" << std::endl;
    } else if(digit == 9) {
        std::cout << "Nine" << std::endl;
    } else {
        std::cout << "Error! only enter single digit" << std::endl;
    }
    return 0;
}