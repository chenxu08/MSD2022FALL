//
//  main.cpp
//  vectorupgrade
//
//  Created by 徐晨 on 9/17/22.
//

#include <iostream>
using namespace std;
class myvector{
private:
    int* data;
    int capacity;
    int size;
public:
    myvector(){
        data = new int[1];
        capacity =1;
        size = 0;
}
    ~ myvector(){
        
    }
    myvector (const myvector & v){
        data=v.data;
        capacity=v.capacity;
        size= v.size;
        cout << "Copy constructor called " << endl;
    }
    myvector & operator = (const myvector & v){
        class myvector v2=v;
        cout << "Assignment operator called " << endl;
        return *this;
    }
    int& operator[] (int index){
           return this->data[index];
        }

    
void freevector (){
    delete [] data;
}
void growvector(){
    int *temp = new int[2*capacity];
    for (int i=0; i < capacity; i++){
        temp[i]= data[i];
    }
    freevector ();
    capacity *=2;
    data = temp;
    temp = nullptr;
}
void pushback(int value){
    if (size==capacity){
        growvector();
    }
    data[size]= value;
    size=size+1;
}
void popback(){
    size --;
}
int get(int index){
    if (index <= size){
        return data[index];}
    else{cout<< "error"<<endl;return 0;}
}
void set( int index , int newvalue){
    data[index]=newvalue;
}
int getsize(){return size;}
int getcapacity(){return capacity;}

};

int main(int argc, const char * argv[]) {
    // insert code here...
    myvector v;
    v.pushback(10);
    v.pushback(15);
    v.pushback(20);
    v.pushback(10);
    v.pushback(15);
    v.pushback(20);
    myvector v2(v);
    myvector v3;
    v3=v;
    cout<<v[3];
   
    
    return 0;
}
