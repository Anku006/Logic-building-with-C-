#include<iostream>

int main()
{   
    int num = 5; //you can also take number from user using(cin method)

    if(num > 0)
    {
        std::cout << "Number is Positive" << std::endl;
    }
    if(num < 0)
    {
        std::cout << "Number is Negative" << std::endl;
    }
    if(num == 0)
    {
        std::cout << "Zero" << std::endl;
    }
    return 0;
}