// Print the sum of first n natural numbers. 

#include <iostream>

int main()
{
    int i = 1, sum = 0, num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num <= 0) {
        std::cout << "Error! Natural numbers starts with 1" << std::endl;
        return 0;
    }

    while(i <= num) {
        sum += i;   //summing in the sum = 1 + 2 + 3 + 4....so on
        i++;
    }

    std::cout << "Sum of first " << num << " Natural number is: " << sum << std::endl; 
    return 0;
}