// Print the table of a given number (n × 1 to n × 10).

#include <iostream>

int main()
{
    int tableNum, i = 1;
    std::cout << "Enter number to print table: ";
    std::cin >> tableNum;

    while(i <= 10) {
        std::cout << tableNum << " X " << i << " = " << tableNum * i << std::endl;
        i++;
    }
    return 0;
}