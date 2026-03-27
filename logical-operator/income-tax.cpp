//  Take income and age, and check if eligible for tax (age > 18 and income > 5 L). 

#include <iostream>

int main()
{
    long income;
    int age;
    std::cout << "Enter your income: ";
    std::cin >> income;
    std::cout << "Enter your age: ";
    std::cin >> age;

    //we can also add if age is less than 18 then direct print not eligible case
    //it's for simplicity
    if(income > 500000) {
        if(age > 18) {
            std::cout << "You are eligible for tax" << std::endl;
        }
    } else {
        std::cout << "You are not eligible for tax" << std::endl;
    }
    return 0;
}