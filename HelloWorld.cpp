#include <iostream>

int main(){
    std::cout <<"Hello World" << std::endl;
    int a = 15;
    int b = 10;
    std::cout << a + b << std::endl;

    // Data Types
    int file_size = 100; // if you do not assign a value a random value will be assigned
    double price = 9.99;

    // Excersize - Swap Variable Values
    int c = 1;
    int d = 2;
    // to assign c to d you have to create a third temperary variable 
    int temp = c;
    c = d;
    d = temp;

    
    return 0;
}