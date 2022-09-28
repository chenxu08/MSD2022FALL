//
//  main.cpp
//  a
//
//  Created by 徐晨 on 9/23/22.
//

#include <iostream>
using namespace std;
#include <cmath>
class MyString{
   char *data;
    int size, capacity;
    MyString(){
         size = 0;
         capacity = 10;
         data = new char[capacity];
       }
       MyString(const MyString& s){
          if(s.size!=0){
             size = s.size;
             capacity= 2*size;
             char* temp = new char[capacity];
             for(int i=0; i<size; i++){

             }
             delete []data;
             data=temp;
          }
          else{
            size = 0; capacity = 10;
            data=nullptr;
          }
       }

       ~MyString(){
           size = 0;
           capacity = 0;
           delete []data;
        }
    MyString operator+(const MyString& rhs){
        MyString temp;
        int p;
        for (p=0; data[p] != '\0'; p++){
            temp.data[p]=data[p];
        };
        for(int q=0; rhs.data[q] != '\0'; q++,p++)
        {
            temp.data[p]=rhs.data[q];
        }
        return temp;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    MyString s = 'h';
    MyString s2 = 'w';
    MyString s3 = s+s2;
    cout<< s3;
    
    return 0;
}
