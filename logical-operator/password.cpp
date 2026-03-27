//Take a password string and check basic rules (length ≥ 8 and contains at least one 
// digit).

#include <iostream>

int main()
{
    char ch[20];
    int count = 0;
    bool hasDigit = false;
    std::cout << "Enter your password: ";
    std::cin >> ch;              //if you want to add spaces in password use getline(cin, ch) function

    for(int i = 0; ch[i] != '\0'; i++) {        //I am not handle the blank space case because generally
        count++;                                //password doesn't have spaces
    }

    //chekcing if length of string contains any digit
    for(int j = 0; j < count; j++) {
        //we can also use isdigit(ch[j]) function instead of writing long condition
        if(ch[j] == '1' || ch[j] == '2' || ch[j] == '3' || ch[j] == '4' ||
            ch[j] == '5' || ch[j] == '6' || ch[j] == '7' || ch[j] == '8' || ch[j] == '9' || ch[j] == '0') {
                hasDigit = true;
        }
    }
 
    if(count >= 8 && hasDigit == true) {
        std::cout << "Valid password" << std::endl;
    } else {
        std::cout << "Not valid password" << std::endl;
    }
    
    return 0;
}