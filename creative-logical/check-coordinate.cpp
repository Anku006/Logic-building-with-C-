//Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the 
// origin.

#include <iostream>

int main()
{
    int x, y;
    std::cout << "Enter Coordinates(x,y): ";
    std::cin >> x >> y;

    //I commented only question asked scenarios
    if(x != 0 && y == 0) {          //x must be non-zero and y must be 0
        std::cout << "Coordinates lies on X-axis" << std::endl;
    } else if(x == 0 && y != 0) {   //y must be non-zero and x must be 0
        std::cout << "Coordinates lies on Y-axis" << std::endl;
    } else if((x > 0 && y > 0)){
        std::cout << x << " and " << y << " lies on Top-Right position" << std::endl;
    } else if(x < 0 && y > 0){
        std::cout << x << " and " << y << " lies on Top-Left position" << std::endl;
    } else if(x < 0 && y > 0){
        std::cout << x << " and " << y << " lies on Bottom-Left position" << std::endl;
    } else if(x > 0 && y < 0){
        std::cout << x << " and " << y << " lies on Bottom-Right position" << std::endl;
    }else {
        std::cout << "Coordinates lies on Origin." << std::endl;        //coordinates at origin
    }
    return 0;
}