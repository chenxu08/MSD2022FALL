//
//  main.cpp
//  RomanNumerals
//
//  Created by chenxu on 8/25/22.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int number;
    string roma_number;
    cout << "Enter decimal number:\n";
    cin >> number;
    if (number > 0){
    while ( number !=0){
    if (number >= 1000){
        number= number - 1000;
        roma_number= roma_number + "C";
    }else if (number >= 900){
        number= number - 900;
        roma_number= roma_number + "CM";
    }else if (number >= 500){
        number= number - 500;
        roma_number= roma_number + "D";
    }else if (number >= 400){
        number= number - 400;
        roma_number= roma_number + "CD";
    }else if (number >= 100){
        number= number - 100;
        roma_number= roma_number + "C";
    }else if (number >= 90){
        number= number - 90;
        roma_number= roma_number + "XC";
    }else if (number >= 50){
        number= number - 50;
        roma_number= roma_number + "L";
    }else if (number >= 40){
        number= number - 40;
        roma_number= roma_number + "XL";
    }else if (number >= 10){
        number= number - 10;
        roma_number= roma_number + "X";
    }else if (number >= 9){
        number= number - 9;
        roma_number= roma_number + "IX";
    }else if (number >= 5){
        number= number - 5;
        roma_number= roma_number + "V";
    }else if (number >= 4){
        number= number - 4;
        roma_number= roma_number + "IV";
    }else if (number >= 1){
        number= number - 1;
        roma_number= roma_number + "I";}
    }
        cout << "Roman numeral version:\n" << roma_number << "\n";
        
    }else {cout << "Invalid input\n";}
    return 0;
}
