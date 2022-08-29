//
//  restfunction.cpp
//  Multifile
//
//  Created by 徐晨 on 8/29/22.
//

#include "restfunction.hpp"
#include "LetterHelpers.hpp"
#include <string>
using namespace std;
bool IsTerminator(char c){
    if (c =='.' || c == '?' || c == '!'){return true;
    }else{return false; }}
bool IsPunctuation(char c){
    if (c =='.' || c == '?' || c == '!'||c==','){return true;
    }else{return false; }}

bool Isspace(char c){
    if (c== ' '){return true;}else{return false;}}

int NumWords(string s){
    int n=0;
    for (int i=0 ; i <= s.length()-1; i++){
        if (Isspace(s[i])){n=n+1;}}
    return n+1;}
int NumSentences(string s){
    int n=0;
    for (int i=0 ; i <= s.length()-1; i++){
        if (IsTerminator(s[i])){n=n+1;}}
    return n;}

double AverageWordLength(string s){
    double sum=0;
    for (int i=0 ; i <= s.length()-1; i++){
        if (IsConsonant(s[i]) || IsVowel(s[i])){sum=sum+1;}}
    return sum/ NumWords(s);}
double AverageVowelsPerWord(string s){
    double sum=0;
    for (int i=0 ; i <= s.length()-1; i++){
        if (IsVowel(s[i]) ){sum=sum+1;}}
    return sum/ NumWords(s);}
