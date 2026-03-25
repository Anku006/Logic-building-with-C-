//Take a 3-digit number and determine if the middle digit is the largest, smallest, or 
// neither. 

#include <iostream>

int main()
{
    int num;
    int d1, d2, d3;     //d1, d2, and d3 store num digits

    std::cout << "Enter a three digit number: ";
    std::cin >> num;

    d1 = num%10;    //It gives us number last digit and store it in d1
    num = num/10;   //updating the value of number
    d2 = num%10;    //and so on
    num = num/10;
    d3 = num;

    if(d2 > d1 && d2 > d3)
    {
        std::cout << "Middle digit is largest" << std::endl;
    }else if(d2 < d1 && d1 && d3) {
        std::cout << "Middle digti is smallest" << std::endl;
    } else {
        std::cout << "Neither largest or Smallest" << std::endl;
    }

    // Note:- You can add more cases like if middle digit is zero
    return 0;
}