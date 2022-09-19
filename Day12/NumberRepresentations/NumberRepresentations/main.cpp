//
//  main.cpp
//
//
//  Created by chenxy on 9/7/22.
//

#include <iostream>
#include <cstdint>
#include <assert.h>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
bool approxEquals(double a,double b, double tolerance);
using namespace std;
void unicode (string filename);
int main(int argc, const char * argv[]) {
//    uint8_t a,b;
//    uint16_t c,d;
//    uint64_t e,f;
//    cout<< "size of uint8_t: "<< sizeof(a)<<endl;
//    cout<< "size of uint16_t: "<< sizeof(c)<<endl;
//    cout<< "size of uint64_t: "<< sizeof(e)<<endl;
//    a= 0xFF; b=0x00;
//    c= 0xFFFF; d=0x0000;
//    e= 0xFFFFFFFFFFFFFFFF; f=0x0000000000000000;
//    cout << "Max of uint8_t is: "<< +a <<", and min is: "<< +b<<endl;
//    cout << "Max of uint16_t is: "<< +c <<", and min is: "<< +d<<endl;
//    cout << "Max of uint64_t is: "<< +e <<", and min is: "<< +f<<endl;
//    int8_t g,h;
//    int16_t i,j;
//    int64_t k,l;
//    cout<< "size of int8_t: "<< sizeof(g)<<endl;
//    cout<< "size of int16_t: "<< sizeof(i)<<endl;
//    cout<< "size of int64_t: "<< sizeof(k)<<endl;
//    g=-0x80; h=0x7f;
//    i=-0x8000; j=0x7fff;
//    k=-0x8000000000000000; l=0x7fffffffffffffff;
//    cout << "min of int8_t is: "<< +g <<", and max is: "<< +h<<endl;
//    cout << "min of int16_t is: "<< +i <<", and max is: "<< +j<<endl;
//    cout << "min of int64_t is: "<< +k <<", and max is: "<< +l<<endl;
//    double sum = .1 + .2;
//    cout << sum << endl;
////    assert (sum==.3);
//    cout << setprecision(18);
//    cout << sum << endl;
//    cout << .3 << endl;
//    assert (approxEquals(sum,.3,0.1e-15));
//    return 0;
    unicode("UTF-8-demo.txt");

}
bool approxEquals(double a,double b, double tolerance){
    if (abs(a-b)<=tolerance){
        return true;
    }else{return false;}
}
void unicode (string filename){
    ifstream ins(filename);
    char c;
    int number_ascii=0;
    int number_unicode=0;
    while (ins >> c){
        cout << c << endl;
        if (c>=0 && c<=128){
            number_ascii=number_ascii+1;
        }else{number_unicode=number_unicode+1;}
    }
    cout << "number of ASCII is :" <<number_ascii << endl;
    cout << "number of Unicode is :" <<number_unicode << endl;
}
