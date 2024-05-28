#include <iostream>

using namespace std;

int main(){
    /*
        int takes 4 bytes of memory and has a range of -2 billion to 2 billion
        short takes 2 bytes and has a memory of -32768 to 32767
        long takes  4 bytes and has range as int
        long long takes 8 bytes - really large numbers > 2 billion

        for Floats we have 
        floats, double and long double
        then we have bool and char
    */

    double price = 99.00;
    float InterestRate = 3.67f; // "f" tells the compiler to treat it as a float not a double
    long fileSize = 90000L;
    auto letter = 'a';

    // Brace initialisation stops error from occuring
    int number{20};

    // You can also present Binary and Hex numbers :)
    int binary = 0b11111111;
    // this will print 255
    int Hex = 0xFF;
    // this will also print 255, Nice!
    // Narrowing conversions is where you try to convert a large number into a data type that can only store smaller numbers
    
    return 0;
}