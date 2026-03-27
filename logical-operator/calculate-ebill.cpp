// Take electricity units consumed and calculate the bill as per slabs (using if-else).

#include <iostream>
#include <iomanip>

int main()
{
    int units;
    float energyCharges = 0, fixedCharges = 0, totalBill;
    int load = 4;       //4 KW meter
    std::cout << "Enter units you consumed in month: ";
    std::cin >> units;

    //calculating energy charges (different slabs)
    if(units <= 150) {
        energyCharges = units * 2.95;
    } else if(units <= 300) {
        energyCharges = (150 * 2.95) + ((units - 150) * 5.25);
    } else {
        energyCharges = (150 * 2.95) + (150 * 5.25) + ((units - 300) * 6.45);
        fixedCharges = load * 50;       //adding fixed charge if units exceeds from 300
    }

    float subTotal = energyCharges + fixedCharges;
    float electricityDuty = units * 0.10;           //Rs. 0.10 per unit;
    float municipalTax = subTotal * 0.02;           //2% of subTotal;
    
    totalBill = subTotal + electricityDuty + municipalTax;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Your Bill is: " << totalBill << std::endl;

    
    
}