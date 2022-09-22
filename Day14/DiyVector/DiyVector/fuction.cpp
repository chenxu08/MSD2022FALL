//
//  fuction.cpp
//  DiyVector
//
//  Created by 徐晨 on 9/22/22.
//

#include "fuction.hpp"

myvector makeVector (int capacity){
    myvector v ={
        new int[capacity],capacity,0};
    return v;
}
void freevector (myvector v){
    delete [] v.data;
}
void pushback(myvector &v , int value){
    if (v.size==v.capacity){
        growvector(v);
    }
    v.data[v.size]= value;
    v.size=v.size+1;
}
void popback(myvector &v){
    v.size --;
}
int get(myvector v, int index){
    if (index < v.size){
        return v.data[index];}
    else{return 0;}
}
void set(myvector v, int index , int newvalue){
    v.data[index]=newvalue;
}
void growvector(myvector &v){
    int *temp = new int [2*v.capacity];
    for (int i=0; i < v.capacity; i++){
        temp[i]= v.data[i];
    }
    delete [] v.data;
    v.capacity *=2;
    v.data = temp;
    temp = nullptr;
}
