//Take time (hours and minutes) and print the smaller angle between the hour and 
// minute hands.

#include <iostream>
#include <iomanip>

int main()
{
    int hour, minutes;
    float hrAngle, minAngle, smallest;
    std::cout << "Enter hour(1-12) and minutes(1-60): ";
    std::cin >> hour >> minutes;

    hrAngle = ((hour%12) * 30) + (minutes / 2.0);      //angle made by hour hand
    minAngle = 6 * minutes;                     //angle made by minute hand

    float difference = hrAngle - minAngle;  

    if(difference < 0) {                //this works as | mod | always gives +ve value
        difference = -difference;       //or you can use abs() function in cmath
    }

    if(difference > 180) {
        smallest = 360 - difference;     //if difference is greater than 180 degree
    } else {
        smallest = difference;
    }

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "The smallest angle made by hour and minutes is: " << smallest << " degree." << std::endl;
    return 0;
}