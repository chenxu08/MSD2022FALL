//
//  main.cpp
//  RoadTripCalculator
//
//  Created by 徐晨 on 8/23/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    float driving_distance;
    float efficiency;
    float gas_price;
    float all_cost;
    std::cout << "Please type the driving distance, in (whole) miles\n";
    std::cin >> driving_distance;
    std::cout << "Please type the vehicle's miles per gallon efficiency\n";
    std::cin >> efficiency;
    std::cout << "Please type the cost of gas in dollars per gallon\n";
    std::cin >> gas_price;
    float gallons_used = driving_distance / efficiency;
    std::cout << "You used " << gallons_used << " gallons\n";
    all_cost = (driving_distance/efficiency)*gas_price;
    std::cout << "The cost of the trip is " << all_cost << " dollars\n";
    return 0;
    
}

