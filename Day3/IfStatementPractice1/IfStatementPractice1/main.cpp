//
//  main.cpp
//  IfStatementPractice1
//
//  Created by chenxu on 8/24/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int age;
    cout << "Please type in your age: \n";
    cin >> age;
    if (age >= 18){ cout << "the user is old enough to vote.\n";
        }else{cout<< "the user is not old enough to vote.\n";}
    if (age >= 30){ cout << "the user is old enough to run for senate.\n";
        }else{cout<< "the user is not old enough to run for senate.\n";}
    if (age >= 80){ cout << "the user is greatest generation.\n";
    }else if (age>=60 && age <80){cout << "the user is baby boomers.\n";
    }else if (age>=40 && age < 60){cout << "the user is generation X.\n";
    }else if (age>=20 && age <40){cout << "the user is millennial.\n";
    }else {cout << "the user is iKid.\n";}
    
    
    return 0;
}
