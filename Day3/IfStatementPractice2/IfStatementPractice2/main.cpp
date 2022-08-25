//
//  main.cpp
//  IfStatementPractice2
//
//  Created by chenxu on 8/24/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char isweekday;
    cout << "Please enter whether or not it's a weekday (Y/N)\n";
    cin >> isweekday;
    while(isweekday != 'Y' &&  isweekday != 'N'){
        cout<<"You type wrong information. \nPlease enter whether or not it's a weekday (Y/N)\n";
        cin>> isweekday;
    }
    char isholiday;
    cout << "Please enter enter whether or not it's a holiday (Y/N)\n";
    cin >> isholiday;
    while(isholiday != 'Y'&&isholiday != 'N'){
        cout<<"You type wrong information. \n Please nenter whether or not it's a holiday (Y/N)\n";
        cin>> isholiday;
    }
    char ishavechildren;
    cout << "Please enter whether or not you have young children (Y/N)\n";
    cin >> ishavechildren;
    while(ishavechildren != 'Y'&&ishavechildren != 'N'){
        cout<<"You type wrong information. \nPlease enter whether or not you have young children (Y/N)\n";
        cin>> ishavechildren;
    }
    if (isweekday == 'Y'&& isholiday == 'Y') {
        if( ishavechildren == 'Y'){cout<< "You can get to sleep in today/n";}else{cout << "You can not get to sleep in today\n";}
    }else{cout << "You can not get to sleep in today\n";}
    return 0;
}
