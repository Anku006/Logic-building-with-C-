// Take a number and print “Fizz” if divisible by 3, “Buzz” if divisible by 5, and 
// “FizzBuzz” if divisible by both.

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num%3 == 0 && num%5 == 0) {          //both conditions should be true
        std::cout << "FizzBuzz" << std::endl;
    } else if(num%5 == 0) {
        std::cout << "Buzz" << std::endl;
    } else if(num%3 == 0) {
        std::cout << "Fizz" << std::endl;
    }
    return 0;
}