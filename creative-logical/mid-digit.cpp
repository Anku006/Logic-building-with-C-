//Take a 3-digit number and check if the sum of the first and last digit equals the middle 
// digit. 

#include <iostream>

int main()
{
    int num;
    int d1, d2, d3;     //for storing digits of number
    std::cout << "Enter a three digit number: ";
    num = abs(num);         //handling negative number  
    std::cin >> num;

    d1 = num%10;     //It gives us number last digit and store it in d1
    num = num/10;    //updating the value of number
    d2 = num%10;     //and so on
    num = num/10;
    d3 = num;

    if(d2 == (d1 + d3)) {
        std::cout << d3 << " + " << d1 << " = " << d2 << std::endl;
    } else {
        std::cout << d3 << " + " << d1 << " != " << d2 << std::endl;
    }
    return 0;
}