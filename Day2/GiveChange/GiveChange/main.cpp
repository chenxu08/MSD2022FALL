//
//  main.cpp
//  GiveChange
//
//  Created by 徐晨 on 8/23/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Enter item price in cents:\n";
    int i_price;
    cin >> i_price;
    cout << "Enter amount paid in cents:\n";
    int paid;
    cin >> paid;
    int change = paid - i_price;
    cout << "Change =" << change << "cents\n";
    int q_number = change / 25;
    change = change - 25* q_number;
    int d_number = change / 10;
    change = change - 10* d_number;
    int n_number = change / 5;
    change = change - 5* n_number;
    int p_number = change / 1;
    change = change - 1* p_number;
    cout << "Quarters:"<< q_number << "\n";
    cout << "Dimes:" << d_number << "\n";
    cout << "Nickels:" << n_number << "\n";
    cout << "Pennies:" << p_number << "\n";
    
    
    
    
    return 0;
}
