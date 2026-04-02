// Print the reverse of a given number. 

#include <iostream>

int main()
{
    int num, rem, rev = 0;  //rev for storing reverse number
    std::cout << "Enter a number: ";
    std::cin >> num;
    int temp = num;
    for(int i = 0; i <= temp; i++) {
        rem = temp%10;                  //extracting last digit
        rev = (rev * 10) + rem;         //calculating (0 * 10) + rem; (rev * 10) + rem;
        temp = temp/10;                 //updating number
    }

    std::cout << "Reverse of number " << num << " is: " << rev << std::endl;

    //Note:- this approach not handle the 0 case means
    //if someone enter 0987 then it shows 789 only because integer don't remember formatting only value
    return 0;
}