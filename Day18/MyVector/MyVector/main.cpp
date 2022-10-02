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
        myvector v2=v;
        cout << "Assignment operator called " << endl;
        return *this;
    }
    T* begin() { return data; }
    T* end() { return data + size; }
    const T* begin() const { return data; }
    const T* end() const{return data + size;}
T& operator[] (int index){
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
    T *temp = new T[2*capacity];
    for (int i=0; i < capacity; i++){
        temp[i]= data[i];
    }
    delete[] data;
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
int get(int index){
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
    myvector<int> a;
    a.pushback(1);
    a.pushback(2);
    a.pushback(4);
    a.pushback(3);
    for(int i=0;i<a.getsize();i++){
        cout<< a[i];
    }
    for(int x : a){
        cout<< x<<" "<<endl;
    }
    sort(a.begin(),a.end());
    for(int x : a){
        cout<< x<<" "<<endl;
    }
    cout << *min_element(a.begin(), a.end())<<endl;
  
    return 0;
}

