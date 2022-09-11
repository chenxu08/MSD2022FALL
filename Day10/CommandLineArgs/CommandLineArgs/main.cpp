//
//  main.cpp
//  CommandLineArgs
//
//  Created by chenxu on 9/11/22.
//What is the first element of the argv array (argv[0])?
//It is the name of the program.

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   
    if (argc > 0){
        cout << argv [0]<< endl;
        cout << argv [1]<< endl;
        cout << argv [2]<< endl;
    }
    return 0;
}
