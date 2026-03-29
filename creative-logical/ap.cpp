// Take three numbers and check if they are in arithmetic progression.

#include <iostream>

int main()
{
    float num1, num2, num3;     //represent terms of A.P.
    std::cout << "Enter three terms: ";
    std::cin >> num1 >> num2 >> num3;

    if((num2 - num1) == (num3 - num2)) {        //checking common difference (d)
        std::cout << "Your terms create an A.P." << std::endl;
    } else {
        std::cout << "Your terms not create an A.P." << std::endl;
    }
    return 0;
}