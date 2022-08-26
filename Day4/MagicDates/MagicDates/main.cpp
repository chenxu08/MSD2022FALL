//
//  main.cpp
//  MagicDates
//
//  Created by chenxu on 8/25/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string date;
    std::cout << "Enter a date:\n";
    cin >> date;
        // get month
        int position1 =date.find("/");
        string month_string = date.substr(0,position1);
        int month = stoi(month_string);
        
        // get day
        int i = position1+1;
        string day_string;
        while (date[i] != '/'){
            day_string = day_string + date[i];
            i=i+1;
        }
        int day = stoi(day_string);
        
        // get year
        
        int y=0;
        int j;
        for( j = date.length(); j>=0; j-- ){
            if (date[j]=='/'){break;}
            y=y+1;
            
        }
        string year_string = date.substr(j+1,y);
        
        int year = stoi(year_string);
    
        //check yaer
        int c=0;
        if (year<1000 || year > 9999){
            c=1;
        }
        //check month
    int a=0;
    if (month<1 || month >12 ){
        a=1;
    }
    // check day
    int b=0;
        if (day<1 || day>31){b=1;}
    
    // get year's last two number
    year= year % 100;
    
    
    //check all and print outcome
    if (a==0 && b==0 && c==0){
        if (year == day * month ){cout << date << " IS a magic date\n";
            
        }else {cout << date << " is not a magic date\n";}
        
    }else {cout <<  "Invalid date\n";}
    
    
    
    
    
    return 0;
}
