#include <iostream>

int main()
{
    int age;
    bool hasVoterCard;

    std::cout << "Please enter your age: ";
    std::cin >> age;

    if(age >= 18) {
        std::cout << "Do you have voter card ? (enter 1 if have else 0): " << std::endl;
        std::cin >> hasVoterCard;
    }

    if(age >= 18) {
        if(hasVoterCard == true) {
            std::cout << "You can vote!" << std::endl;
        } else {
            std::cout << "You are Eligible for vote, but please make voter ID first" << std::endl;
        }
    } else {
        std::cout << "You are not eligible for vote" << std::endl;
    }
    return 0;
}