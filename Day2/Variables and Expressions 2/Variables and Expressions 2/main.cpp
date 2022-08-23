//
//  main.cpp
//  Variables and Expressions 2
//
//  Created by chen xu on 8/23/22.
//Part 2 - Gradebook



#include <iostream>

int main(int argc, const char * argv[]) {
    //
    float a; float b; float c; float d; float e;
    std::cout << "Enter 5 assignment scores:\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;
    float Average = (a+b+c+d+e)/5;
    std::cout << "Average: " << Average <<"\n";
    
    return 0;
}
