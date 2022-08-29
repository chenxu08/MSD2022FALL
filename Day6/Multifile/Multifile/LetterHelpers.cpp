//
//  LetterHelpers.cpp
//  Multifile
//
//  Created by 徐晨 on 8/29/22.
//
#include "LetterHelpers.hpp"
#include "restfunction.hpp"
#include <string>
using namespace std;

bool IsVowel(char c){
    c=(char)tolower(c);
    if(c=='y'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){return true;
    }else {return false; }}
bool IsConsonant(char c){
    if ( IsPunctuation(c) || IsVowel(c) || Isspace(c)){return false;
    } else { return true;}}
int NumVowels(string s){
    int n=0;
    for (int i=0 ; i <= s.length()-1; i++){
        if (IsVowel(s[i])){n=n+1;}}
    return n;}
int NumConsonants(string s){
    int n=0;
    for (int i=0 ; i <= s.length()-1; i++){
        if (IsConsonant(s[i])){n=n+1;}}
    return n;}
