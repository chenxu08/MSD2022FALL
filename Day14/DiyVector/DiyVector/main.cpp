//
//  main.cpp
//  DiyVector
//
//  Created by 徐晨 on 9/17/22.
//

#include <iostream>
#include "fuction.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    myvector v = makeVector(10);
    cout << "the capacity of myvector is "<< v.capacity<<endl;
    cout << "the size of myvector is "<< v.size<<endl;
    for (int i = 0; i<= 20; i++){
        pushback(v,i+5);
    }
    cout << "afterpush; the capacity of myvector is "<< v.capacity<<endl;
    cout << "afterpush; size of myvector is "<< v.size<<endl;
    for (int i = 0; i <v.size;i++){
        cout << v.data[i] <<" " ;
    }
    cout << endl;
    popback(v);
    cout << "afterpop; the capacity of myvector is "<< v.capacity<<endl;
    cout << "afterpop; size of myvector is "<< v.size<<endl;
    for (int i = 0; i <v.size;i++){
        cout << v.data[i] <<" ";
    }
    cout << endl;
    cout <<"like vec[10]: "<< get(v,10)<< endl;
    cout <<"before set vec[3]= "<< get(v,3)<< endl;
    set(v,3,10);
    cout <<"after set vec[3]= "<< get(v,3)<< endl;
    
    return 0;
}

