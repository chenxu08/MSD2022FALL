//
//  main.cpp
//  VectorPractice
//
//  Created by 徐晨 on 8/29/22.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int sum (vector<int> arr);
vector<char> stringToVec (string s);
vector<int> reverses (vector<int> arr);
int main(int argc, const char * argv[]) {
    vector<int> numbers = { 1, 2, 3, 4,5,6};
    string s = "Hello world";
    cout << sum (numbers)<< "\n";
    vector<char> stvs=stringToVec (s);
    for(int i =0; i<stvs.size();i++){
        cout << stvs[i]<<" ";
    }
    cout<<"\n";
    vector<int> r_arr=reverses (numbers);
    for(int i =0; i<r_arr.size();i++){
        cout << r_arr[i]<<" ";
    }
    return 0;
}

int sum (vector<int> arr){
    int sum = 0;
    for (int i =0; i< arr.size(); i++ ){
        sum = sum + arr[i];}
    return sum;
}
vector<char> stringToVec (string s){
    vector<char> stvs;
    for (int i = 0; i<= s.length()-1;i++){
        stvs.push_back(s[i]);
    }
    return  stvs;
}

vector<int> reverses (vector<int> arr){
    vector<int>r_arr;
    for (int i = arr.size()-1; i>=0; i--){
        r_arr.push_back(arr[i]);
    }
    return r_arr;
}
