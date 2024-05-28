#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double result = floor(1.2);
    double power = pow(2, 3);
    // Program to calculate the area of a circle

    double pi = 3.142;
    double radius;
    cout << "Raidus of circle: ";
    cin >> radius;
    double area = 2 * radius * pi;
    cout << "Area is " << area;

    return 0;
}