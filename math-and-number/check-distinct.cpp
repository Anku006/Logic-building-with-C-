//  Take a 3-digit number and check if all digits are distinct.

#include <iostream>

int main()
{
    int num;
    int d1, d2, d3;   //d1, d2, and d3 store num digits

    std::cout << "Enter a three digit number: ";
    std::cin >> num;

    d1 = num%10;  //It gives us number last digit and store it in d1
    num = num/10; //updating the value of number
    d2 = num%10;  //It gives us number second last digit and store it in d2
    num = num/10; //updating the value of number
    d3 = num;  //It gives us number first digit and store it in d3

    if(d1 == d2 && d2 == d3)   //Note:- if write like (d1 == d2 == d3) its wrong in C++ 
    {
        std::cout << "Number has same digit" << std::endl;
    } else if((d1 == d2) || (d2 == d3) || (d3 == d1)){
        std::cout << "Number has two same digit" << std::endl;
    } else {
        std::cout << "Number has all distinct digit" << std::endl;
    }
    return 0;
}