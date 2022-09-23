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
        myvector v2=v;
        cout << "Assignment operator called " << endl;
        return *this;
    }
int& operator[] (int index){
        return data[index];
        }
bool operator ==(myvector& v){
        int count=0;
        if (size==v.getsize()){
            for (int i=0;i<=v.getsize();i++){
                if (data[i]==v[i]){
                    count=count+1;

                }
            }
        }

        if (count==getsize()+1){
            return true;
        }else{return false;}
    }
    bool operator !=(myvector& v){
        
        if (size!=v.getsize()){
            return true;
        }else {
            for (int i=0;i<=v.getsize();i++){
                if (data[i]!=v[i]){
                    return true;
                }
            }
            return false;
        }
    }
    bool operator <(myvector& v){
        if (size==v.getsize()){
            for (int i=0;i<=v.getsize();i++){
                if (data[i]<v[i]){
                    return true;}
                
            }
            return false;
        }else {
            cout << "error"<<endl;
            return false;
        }

    }
    bool operator >(myvector& v){
        if (size==v.getsize()){
            for (int i=0;i<=v.getsize();i++){
                if (data[i]>v[i]){
                    return true;}
                
            }
            return false;
        }else {
            cout << "error"<<endl;
            return false;
        }
    }
    bool operator <=(myvector& v){
        if (size==v.getsize()){
            for (int i=0;i<=v.getsize();i++){
                if (data[i]<=v[i]){
                    return true;}
                
            }
            return false;
        }else {
            cout << "error"<<endl;
            return false;
        }
        
    }
    bool operator >=(myvector& v){
        if (size==v.getsize()){
            for (int i=0;i<=v.getsize();i++){
                if (data[i]>=v[i]){
                    return true;}
                
            }
            return false;
        }else {
            cout << "error"<<endl;
            return false;
        }
        
    }
void freevector (){
    delete [] data;
}
void growvector(){
    int *temp = new int[2*capacity];
    for (int i=0; i < capacity; i++){
        temp[i]= data[i];
    }
    delete[] data;
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
    v.pushback(9);
    v.pushback(9);
    v.pushback(4);
    v.pushback(15);
    
    myvector v2;
    v2.pushback(9);
    v2.pushback(9);
    v2.pushback(4);
    v2.pushback(15);
    
    myvector v3;
    v3.pushback(9);
    v3.pushback(9);
    v3.pushback(10);
    v3.pushback(12);
    myvector vtest(v);
    myvector vtest2;
    vtest2=v;
    
    cout << "if v==v2 then: "<<(v==v2)<<endl;
    cout << "if v!=v3 then: "<<(v!=v3)<<endl;
    cout << "if v<v3 then: "<<(v<v3)<<endl;
    cout << "if v3>v then: "<<(v3>v)<<endl;
    cout << "if v<=v3 then: "<<(v<=v3)<<endl;
    cout << "if v3>=v then: "<<(v3>=v)<<endl;
    return 0;
}
