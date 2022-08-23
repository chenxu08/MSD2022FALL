//
//  main.cpp
//  Variables and Expressions
//
//  Created by chenxu on 8/23/22.
//  part 1 Unit Conversion

#include <iostream>

int main(int argc, const char * argv[]) {
    float volume;
    std::cout << "Enter volume in ounces:\n";
    std::cin >> volume;
    float Ounces = volume;
    std::cout << "Ounces: " << Ounces << "\n";
    float cups = volume / 8;
    std::cout << "Cups: " << cups << "\n";
    float pints = volume / 16;
    std::cout << "Pints: " << pints << "\n";
    float gal = volume / 128;
    std::cout << "Gallons: " << gal << "\n";
    float lit = volume*0.0296;
    std::cout << "Liters: " << lit << "\n";
    float inch = volume*1.8;
    std::cout << "Cubic Inches: " << inch << "\n";

    

    return 0;
}
