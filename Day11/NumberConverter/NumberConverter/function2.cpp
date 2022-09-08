//
//  function2.cpp
//  NumberConverter
//
//  Created by chenxu on 9/7/22.
//

#include "function2.hpp"
#include <string>
#include <algorithm>
using namespace std;

string intToDecimalString (int input){
    string result = to_string(input);
    return result;
}
string intToHexadecimalString(int input){
    string result = "";
    int index = 0;
    if (input < 0){
        input = - input;
        index =1;
    }
    int reminder ;
    while (input !=0){
        reminder = input % 16;
        input = input/16;
        if (reminder < 10){
            result =result+to_string(reminder);
        }else if (reminder >=10){
            result = result + char('a'+reminder-10);
        }
    }
    reverse(result.begin(),result.end());;
    if (index == 1){
        result = '-'+result;
    }
    return result;
}

string intToBinaryString (int input){
    string result = "";
    int index = 0;
    if (input < 0){
        input = - input;
        index =1;
    }
    int reminder ;
    while (input !=0){
        reminder = input % 2;
        input = input/2;
        result =result+to_string(reminder);}
    reverse(result.begin(),result.end());;
    if (index == 1){
        result = '-'+result;
    }
    return result;
}
