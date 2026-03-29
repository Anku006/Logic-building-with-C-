// Take three numbers and check if they are in geometric progression. 

#include <iostream>

int main()
{
    float num1, num2, num3;
    std::cout << "Enter three terms of G.P.: ";
    std::cin >> num1 >> num2 >> num3;

    if((num2/num1) == (num3/num2)) {        //checking common ratio
        std::cout << "Terms are G.P." << std::endl;
    } else {
        std::cout << "Terms are not G.P." << std::endl;
    }
    return 0;
}