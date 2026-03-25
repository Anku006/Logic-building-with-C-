// Take coordinates (x, y) and determine which quadrant the point lies in.

#include <iostream>

int main()
{
    int x, y;
    std::cout << "Enter the value for x and y coordinates: ";
    std::cin >> x >> y;

    if(x > 0 && y > 0) {        //First Quadrant
        std::cout << x << " and " << y << " lies in First Quadrant" << std::endl;
    } else if(x < 0 && y > 0) {     //Second Quadrant
        std::cout << x << " and " << y << " lies in Second Quadrant" << std::endl;
    } else if(x < 0 && y < 0) {     //Third Quadrant
        std::cout << x << " and " << y << " lies in Third Quadrant" << std::endl;
    } else if(x > 0 && y < 0) {     //Fourth Quadrant
        std::cout << x << " and " << y << " lies in Fourth Quadrant" << std::endl;
    } else if((x > 0 || x < 0) && y == 0) {
        std::cout << "Points lies on x-axis" << std::endl;
    } else if(x == 0 && (y > 0 || y < 0)) {
        std::cout << "Points lies on x-axis" << std::endl;
    } 
    else {
        std::cout << "Points lies on Origin" << std::endl;
    }
    return 0;
}