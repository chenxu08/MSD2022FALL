//
//  main.cpp
//  NumberConverter
//
//  Created by chenxu on 9/7/22.
//

#include <iostream>
#include <string>
#include "function1.hpp"
#include "function2.hpp"
using namespace std;
int main(int argc, const char * argv[]) {

    cout<< stringToInt( intToBinaryString( 100), 2 )<<"\n";
    cout<< stringToInt( intToBinaryString( 198), 2 )<<"\n";
    cout<< stringToInt( intToHexadecimalString( 100), 16)<<"\n";
    cout<< stringToInt( intToHexadecimalString( 65535), 16 )<<"\n";
    cout<< stringToInt( intToDecimalString( 32), 10 )<<"\n";
    cout<< stringToInt( intToDecimalString( 65534), 10 )<<"\n";

    return 0;
}
