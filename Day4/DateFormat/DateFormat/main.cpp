//
//  main.cpp
//  DateFormat
//
//  Created by chenxu on 8/25/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string date;
    cout << "Enter a date:\n";
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
    string year_string;
    for( int j = date.length()-4; j<=date.length()-1; j++ ){
        year_string= year_string + date[j];
    }
    int year = stoi(year_string);
    
    // changge month fromat
    string output_month;
    int a=0;
    if  (month == 1 ){ output_month = "January ";
    }else if(month == 2){ output_month = "February ";
    }else if(month == 3){ output_month = "March ";
    }else if(month == 4){ output_month = "April ";
    }else if(month == 5){ output_month = "May ";
    }else if(month == 6){ output_month = "June ";
    }else if(month == 7){ output_month = "July ";
    }else if(month == 8){ output_month = "Augest ";
    }else if(month == 9){ output_month = "September ";
    }else if(month == 10){ output_month = "Octuber ";
    }else if(month == 11){ output_month = "November ";
    }else if(month == 12){ output_month = "December ";
    }else {a=1;}
    
    int b=0;
    if (day<1 || day>31){b=1;}
    
    if (a==0 && b==0){
        cout << output_month << " " << day << ", "<< year<< "\n";
    }else {cout << "Invalid date\n";}

    
    
    
    return 0;
}
