// Take two numbers and print the larger one

#include <iostream>

int main()
{
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if(num1 > num2)
    {
        std::cout << num1 << std::endl;
    }
    else{
        std::cout << num2 << std::endl;
    }

    //you can also use shortcut
    //(num1 > num2) ? "print num1" : "print num2";
}