// Print the sum of all even numbers up to n.

#include <iostream>

int main()
{
    int i = 1, sum = 0, num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    while(i <= num) {
        if(i%2 == 0) {      //current number divide by 2
            sum += i;       //add in sum variable
        }
        i++;
    }

    std::cout << "Sum of all even numbers from 1 to " << num << " is:" << std::endl;
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}