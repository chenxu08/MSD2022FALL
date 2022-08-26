//
//  main.cpp
//  FunctionPractice1
//
//  Created by chenxu on 8/26/22.
//

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
void hypotenuse ();
void speed();
int main(int argc, const char * argv[]) {
    hypotenuse();
    speed();
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))<< result << " seconds since the Epoch\n";
    return 0;
}
// fouction a
void hypotenuse (){
    cout << "Please enter the right-angle side lengths of a triangle: \n";
    int a; int b;
    cin >> a;
    cin >> b;
    int C=a*a + b*b;
    float c = sqrt(C);
    cout << "the length of the hypotenuse is " << c << "\n";
}
// founction b
void speed(){
    double speed;
    double angle;
    cout << "Please input the speed: \n";
    cin >> speed;
    cout << "Please input the angle (that's the angle in radians): \n";
    cin >> angle;
    double x = speed*cos(angle);
    double y = speed*sin(angle);
    cout << "x = " << x <<"\n";
    cout << "y = " << y <<"\n";
}
