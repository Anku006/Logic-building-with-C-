#include <iostream>

int main()
{
    int temperature;
    std::cout << "Enter temperature in degree Celsius: ";   //you can also use Fehrenheit
    std::cin >> temperature;

    if(temperature < 10 || temperature <= 19)  //you can add modrate in range 11-19
    {
        std::cout << "Cold" << std::endl;
    }
    if(temperature > 19 && temperature < 29)
    {
        std::cout << "Warm" << std::endl;
    }
    if(temperature > 29){
        std::cout << "Hot" << std::endl;
    }
    return 0;
}