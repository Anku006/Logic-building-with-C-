// Print all odd numbers between 1 and 100. 

#include <iostream>

int main()
{
    for(int i = 1; i <= 100; i++) {
        if(i%2 != 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}