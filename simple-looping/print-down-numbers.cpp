// Print numbers from 10 down to 1.

#include <iostream>

int main()
{
    int i = 10;
    do {
        std::cout << i << std::endl;
        i--;
    } while(i >= 1);
    return 0;
}