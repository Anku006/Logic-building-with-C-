//  Check if a number is divisible by both 3 and 5. 

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num%5 == 0 && num%3 == 0){   //if remainder of 5 and 3 is 0 then if block runs (means both conditions should be true)
        std::cout << "Divisible by both 5 and 3" << std::endl;
    }
    else{
        std::cout << "Not divisible by both 5 and 3" << std::endl;
    }
    return 0;
}