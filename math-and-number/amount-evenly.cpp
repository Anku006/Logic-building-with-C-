//  Check if an amount can be evenly divided into 2000, 500, and 100 currency notes.

#include <iostream>

int main()
{
    int amount;         //we are taking only integer value e.g 13200
    std::cout << "Enter a amount: ";
    std::cin >> amount;

    if(amount%100 == 0)
    {
        int noteOf2000 = amount/2000;       //13200/2000 = 6
        amount %= 2000;                     //amount%2000 = 1200
        int noteOf500 = amount/500;         //1200/500 = 2
        amount %= 500;                      //1200%500 = 200
        int noteOf100 = amount/100;         //200/100 = 2

        std::cout << "\nNotes are evenly distributed:" << std::endl;
        std::cout << "Note of Rs.2000: " << noteOf2000 << std::endl;
        std::cout << "Note of Rs.500: " << noteOf500 << std::endl;
        std::cout << "Note of Rs.100: " << noteOf100 << std::endl;
    } else {
        std::cout << "Notes are not evenly distributed" << std::endl;
    }
    return 0;
}