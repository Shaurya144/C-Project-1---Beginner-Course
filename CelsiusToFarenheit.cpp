#include <iostream>

using namespace std;


int main (){
    int Fahrenheit;
    cout << "Fahrenheit : ";
    cin >> Fahrenheit;
    double Celsius = (Fahrenheit-32) / 1.8;
    cout << Celsius;
}