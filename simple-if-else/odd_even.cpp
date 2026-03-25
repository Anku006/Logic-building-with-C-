// Check if a number is even or odd. 

#include<iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num%2 == 0)
    {
        std::cout << num << " is Even" << std::endl;
    }
    if(num%2 != 0)
    {
        std::cout << num << " is Odd" << std::endl;
    }
    return 0;
}