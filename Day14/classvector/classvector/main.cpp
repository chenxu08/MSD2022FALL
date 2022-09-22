//
//  main.cpp
//  classvector
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
//        int *temp = new int[2*capacity];
//        for (int i=0; i < capacity; i++){
//            temp[i]= data[i];
//        }
//        delete [] data;
//        capacity *=2;
//        data = temp;
//        temp = nullptr;
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
    
    v.popback();
    cout<<v.get(2)<< endl;
    cout<< v.getsize()<<endl;
    cout<< v.getcapacity()<<endl;

    for (int i = 0; i <=(v.getsize()) ;i++){
        cout << v.get(i)<<" ";
    }
    cout<<endl;
    
    return 0;
}
