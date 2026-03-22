#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num%5 == 0)   //gives remainder 0
    {
        std::cout << "Number is divisible by 5" << std::endl;
    }
    else{
        std::cout << "Not divisible by 5" << std::endl;
    }
    return 0;
}