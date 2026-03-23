#include <iostream>

int main()
{
    int marks;
    char grade;
    std::cout << "Enter marks between 0-100: ";
    std::cin >> marks;

    if(marks >= 90) {
        grade = 'A';
        std::cout << "Your marks is " << marks << " and you got grade " << grade << std::endl;
    } else if(marks >= 80) {
        grade = 'B';
        std::cout << "Your marks is " << marks << " and you got grade " << grade << std::endl;
    } else if(marks > 70) {
        grade = 'C';
        std::cout << "Your marks is " << marks << " and you got grade " << grade << std::endl;
    } else if(marks >= 60) {
        grade = 'D';
        std::cout << "Your marks is " << marks << " and you got grade " << grade << std::endl;
    } else if(marks >= 50) {
        grade = 'E';
        std::cout << "Your marks is " << marks << " and you got grade " << grade << std::endl;
    } else {
        grade = 'F';
        std::cout << "Your marks is " << marks << " (Fail) " << grade << std::endl;
    }
}