//
//  fuction.hpp
//  DiyVector
//
//  Created by 徐晨 on 9/22/22.
//

#ifndef fuction_hpp
#define fuction_hpp

#include <stdio.h>

#endif /* fuction_hpp */
struct myvector{
    int* data;
    int capacity;
    int size;
};
myvector makeVector (int capacity);
void freevector (myvector v);
void pushback(myvector &v , int value);
void popback(myvector &v);
int get(myvector v, int index);
void set(myvector v, int index , int newvalue);
void growvector(myvector &v);
