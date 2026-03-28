//Take time (hours and minutes) and print the smaller angle between the hour and 
// minute hands.

#include <iostream>

int main()
{
    int hour, minutes;
    float angle;
    std::cout << "Enter hour(1-12) and minutes(1-60): ";
    std::cin >> hour >> minutes;

    angle = (hour * 30) + ((11/2) * minutes);

    std::cout << "The smallest angle made by hour and minutes is: " << angle << std::endl;
    return 0;
}