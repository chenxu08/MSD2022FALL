//
//  function1.cpp
//  NumberConverter
//
//  Created by chenxu on 9/7/22.
//
#include <string>
#include <iostream>
#include "function1.hpp"
#include<math.h>
using namespace std;
int stringToInt (string input,int base ){
    int result=0;
    int numericValue;
    int index=0;
    if (input[0]=='-'){
        input = input.substr(1,input.length()-1);
        index=1;
    }
    if(base==2){
        for (int i =0; i< input.length(); i++){
            numericValue = input[i]-'0';
            result= result + pow(2,input.length()-(i+1))*numericValue;
        }
    }else if(base == 10){
        for (int i =0; i< input.length(); i++){
            numericValue = input[i]-'0';
            result= result + pow(10,input.length()-(i+1))*numericValue;
        }
    }else if(base == 16){
        for (int i =0; i< input.length(); i++){
            input[i]=(char)tolower(input[i]);
            if (input[i]<='9' && input[i]>='0'){
            numericValue = input[i]-'0';
            result= result + pow(16,input.length()-(i+1))*numericValue;
            }else if (input[i]<='f' && input[i]>='a'){
                numericValue = input[i] - 'a' + 10;
                result= result + pow(16,input.length()-(i+1))*numericValue;
            }

        }
    }else{
        cout << "invalid base\n";
    }
    if (index ==1){result = -result;}
    return result;
        };
