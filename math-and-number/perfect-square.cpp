//  Check whether a number is a perfect square (without using the square root function).

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number to check perfect square: ";
    std::cin >> num;

    for(int i = 1; i*i <= num; i++)             //1 * 1 <= num
    {                                           //2 * 2 <= num
        if(i*i == num) {                        //and so on...
            std::cout << "Number is perfect square" << std::endl;
            return -1;
        }
    }

    std::cout << "Not a perfect square number" << std::endl;
    
        
    return 0;
}