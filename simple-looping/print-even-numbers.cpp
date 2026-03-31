// Print all even numbers between 1 and 100. 

#include <iostream>

int main()
{
    int i = 1;
    do {
        if(i%2 == 0) {
            std::cout << i << std::endl;
        }
        i++;
    } while(i <= 100);
    return 0;
}