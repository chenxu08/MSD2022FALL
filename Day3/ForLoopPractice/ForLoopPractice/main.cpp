//
//  main.cpp
//  ForLoopPractice
//
//  Created by chenxu on 8/24/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // question 1 for loop
    for (int x=1; x<=10; x++){cout << x<<" ";}
    cout<< "\n";
    // question 1 while loop
    int x=1;
    while(x<=10){cout << x<<" "; x++;}
    cout << "\n";
    /* For this problem, I think for loop is better than while loop because we know how many times will the loop execute. */
    
    
    // question 2
    int i_number;
    int f_number;
    int a;
    int b;
    cout << "Please enter the initial number and final number:\n";
    cin >> a;
    cin >> b;
    if (a>b){
        i_number=b;
        f_number=a;
    }else{
        i_number=a;
        f_number=b;
    }
    for (int x=i_number; x<= f_number; x++){ cout << x << " ";}
    cout << "\n";
    //question 3 loop + if statement
    for (int x=1; x<=20 ; x++){
        if ((x%2) != 0){ cout << x << " ";}
    }
    cout << "\n";
    // question 3 loop
    for (int x=1; x<=20 ; x=x+2){ cout << x << " ";}
    cout << "\n";
    /* For this question, I perfer to use second solution because it is a simple condition.*/
    
    // question 4
    int i;
    int sum=0;
    do {
        cout << "Please enter positive numbers to add up. (If you enter negative number, it will end.)\n";
        cin >> i;
        if (i>0){
            sum = sum + i;}
    }while (i>0);
    cout << " the sum is: " << sum <<"\n";
    
    
    //question 5
    for (int i = 1; i<= 5; i++){
        cout << i<< "x*: ";
        for (int j=1; j<=5 ; j++){
            cout << i*j <<" ";
        }
        cout << "\n";
    }
    
    
    return 0;
}
