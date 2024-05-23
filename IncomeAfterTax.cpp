#include <iostream>

main(){
    int Sales = 95000;
    double WaterTax = 0.07;
    double BurgerTax = 0.02;
    double TotalTax = WaterTax + BurgerTax;
    
    double NetIncome = Sales * (1 - TotalTax);

    std::cout << "Your Income After Tax Is : " << NetIncome << std::endl;

    return 0;
}