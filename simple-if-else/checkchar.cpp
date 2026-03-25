// Take a character and check whether it’s uppercase, lowercase, a digit, or a special 
// character. 

#include <iostream>

int main()
{
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if((ch >= 32 && ch <= 47) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
    {
        std::cout << ch << " is a special character" << std::endl;
    }
    if(ch >= 48 && ch <= 57)
    {
        std::cout << ch << " is a digit" << std::endl;
    }
    if(ch >= 65 && ch <= 90) 
    {
        std::cout << ch << " is a uppercase alphabet" << std::endl;
    }
    if(ch >= 97 && ch <= 122)
    {
        std::cout << ch << " is a lowercase alphabet" << std::endl;
    }
    return 0;
}