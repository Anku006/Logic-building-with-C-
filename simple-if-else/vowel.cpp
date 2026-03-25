// Take a character and check if it’s a vowel or consonant.

#include <iostream>

int main()
{
    char ch;
    std::cout << "Enter a alphabet: ";
    std::cin >> ch;

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        std::cout << ch << " is a vowel" << std::endl;
    }
    else{
        std::cout << ch << " is a consonant" << std::endl;
    }
    return 0;
}