//
//  main.cpp
//  templatize
//
//  Created by 徐晨 on 9/18/22.
//

#include <iostream>
using namespace std;

template<typename T>
class myvector{
private:
    T* data;
    int capacity;
    int size;
public:
    myvector(){
        data = new T[1];
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
    T& operator[] (int index){
           return this->data[index];
        }

    
void freevector (){
    delete [] data;
}
void growvector(){
    T *temp = new T[2*capacity];
    for (int i=0; i < capacity; i++){
        temp[i]= data[i];
    }
    freevector ();
    capacity *=2;
    data = temp;
    temp = nullptr;
}
void pushback(T value){
    if (size==capacity){
        growvector();
    }
    data[size]= value;
    size=size+1;
}
void popback(){
    size --;
}
T get(int index){
    if (index <= size){
        return data[index];}
    else{cout<< "error"<<endl;return 0;}
}
void set( int index , T newvalue){
    data[index]=newvalue;
}
int getsize(){return size;}
int getcapacity(){return capacity;}

};
int main(int argc, const char * argv[]) {
    // insert code here...
    myvector<char> v;
    v.pushback('a');
    v.pushback('b');
    v.pushback('c');
    v.pushback('d');
    cout << v[2]<<endl;
    myvector<string> v2;
    v2.pushback("hello");
    v2.pushback("world");
    v2.pushback("hi");
    v2.pushback("everyone");
    cout << v2[2]<<endl;
    return 0;
}
