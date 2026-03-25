// Take a 4-digit number and check if the first and last digits are equal. 

#include <iostream>

int main()
{
    int num;
    int d1, d2, d3, d4;

    std::cout << "Enter a four digit number: ";
    std::cin >> num;

    d1 = num%10;    //It gives us number last digit and store it in d1
    num = num/10;   //updating the value of number
    d2 = num%10;    //and so on
    num = num/10;
    d3 = num%10;
    num = num/10;
    d4 = num;

    if(d4 == d1) {
        std::cout << "First and last digit are equal in the number" << std::endl;
    } else {
        std::cout << "First and last digit not are equal in the number" << std::endl;
    }
    return 0;
}