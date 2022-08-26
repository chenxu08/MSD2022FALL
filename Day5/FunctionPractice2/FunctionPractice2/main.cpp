//
//  main.cpp
//  FunctionPractice2
//
//  Created by chenxu on 8/26/22.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void hypotenuse (int x, int y);
bool isCapitalized(string s);
void boolToString( bool result );
bool isPrime(int number);
int main(int argc, const char * argv[]) {
//    cout << "Please enter the right-angle side lengths of a triangle: \n";
    int a; int b;
    cin >> a;
    cin >> b;
    hypotenuse(a,b);
    cout << "Please enter string: \n";
    string s;
    cin >> s;
    boolToString( isCapitalized(s) );
    cout << "Please enter a number: \n";
    int number;
    cin >> number;
    isPrime( number);
    
   
    return 0;
}
// fouction a
void hypotenuse (int x, int y){
    
    int C=x*x + y*y;
    float c = sqrt(C);
    cout << "the length of the hypotenuse is " << c << "\n";
}


bool isCapitalized(string s){
    if (s[0]>='A'&& s[0]<='Z'){ return true;

    }else { return false;}
    
}
void boolToString( bool result ){
    if (result==true){cout << "true\n";
    }else {cout << "false\n";}
}

bool isPrime(int number){
    int index=0;
    for (int i =2 ; i<= number/2 ; i++){
        if (number % i == 0){index=1;
        }
        
    }
    if (index ==0)
    {cout << "This is a prime number.\n"; return true;
        
    }else {cout << "This is not a prime number.\n"; return false;}
}
