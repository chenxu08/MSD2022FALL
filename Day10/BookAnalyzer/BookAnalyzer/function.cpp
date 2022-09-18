//
//  function.cpp
//  BookAnalyzer
//
//  Created by 徐晨 on 9/12/22.
//

#include "function.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
string find_title(vector<string> content){
    string title="";
    int s=0;
    int e=0;
    for(int i = 0; i < content.size();i++){
        if(content[i]=="Title:"){s=i+1;}
        if(content[i]=="Author:"){e=i-1;}
    }
    if ((e-s)>10||(e-s)<-10){
        title= "unknown ";
    }else{
    for (int j = s; j <=e ;j++){
        title=title + content[j]+" ";
    }}
    return title;
}
string find_Author(vector<string> content){
    string Author="";
    int s=0;
    int e=0;
    for(int i = 0; i < content.size();i++){
        if(content[i]=="Author:"){s=i+1;}
        if(content[i]=="Release"){e=i-1;}
    }
    if ((e-s)>10||(e-s)<-10){
        Author = "unknown";
    }else{
    for (int j = s; j <=e ;j++){
        Author=Author + content[j]+" ";
    }}
    return Author;
}
string find_longest(vector<string> content){
    string longest="";
    for(int i = 0; i < content.size();i++){
        if( longest.length()< content[i].length()){
            longest=content[i];
        }
    }
    return longest;
}
string find_shortest(vector<string> content){
    string shortest=content[0];
    for(int i = 0; i < content.size();i++){
        if( shortest.length()> content[i].length()){
            shortest=content[i];
        }
    }
    return shortest;
}

void word_analyse (vector<string> content, string test, int all){
    int times=0;
    vector <string> result;
    string str;
    int char_number_goal=0;
    int location;
    vector <int> position;
    for(int i = 0; i < content.size();i++){
        char_number_goal=char_number_goal+content[i].length();
        if (test == content[i]){
            times ++;
            int max=content.size()-1;
            location= (char_number_goal +1)*100/ all;
            position.push_back(location);
            if (i==0){
                result.push_back(content[i]+" "+content[i+1]);
            }else if(i==max){
                result.push_back(content[i-1]+" "+content[i]);
            }else{
                result.push_back(content[i-1]+" "+content[i]+" "+content[i+1]);}
           
        }
    }
    cout << "The word '"<<test<<"' appears "<<times <<" times:"<< endl;
    for (int i =0 ; i< result.size(); i++){
        cout << "  at "<<position[i]<< "%: '"<<result[i]<<""<< endl;
    }
}
