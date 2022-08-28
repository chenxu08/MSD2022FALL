//
//  main.cpp
//  String Analyzer
//
//  Created by chenxu on 8/27/22.
//

#include <iostream>
#include <string>
using namespace std;
bool IsTerminator(char c);
bool IsPunctuation(char c);
bool IsVowel(char c);
bool Isspace(char c);
bool IsConsonant(char c);
int NumWords(string s);
int NumSentences(string s);
int NumVowels(string s);
int NumConsonants(string s);
double AverageWordLength(string s);
double AverageVowelsPerWord(string s);
int main(int argc, const char * argv[]) {
    string test;
    int index=0;
    while (index == 0){
    cout << "Enter a string containing one or more sentences:\n";
    getline( std::cin, test);
        if (test != "done"){
    cout << "Analysis:\n";
    cout << " Number of words: "<<NumWords(test)<<"\n";
    cout << " Number of sentences: "<<NumSentences(test)<<"\n";
    cout << " Number of vowels: "<<NumVowels(test)<<"\n";
    cout << " Number of consonants: "<<NumConsonants(test)<<"\n";
    cout << " Reading level (average word length): "<<AverageWordLength(test)<<"\n";
            cout << " Average vowels per word: "<<AverageVowelsPerWord(test)<< "\n";}else{
                cout << "Goodbye.\n"; index =1;}}
        return 0;}
bool IsTerminator(char c){
    if (c =='.' || c == '?' || c == '!'){return true;
    }else{return false; }}
bool IsPunctuation(char c){
    if (c =='.' || c == '?' || c == '!'||c==','){return true;
    }else{return false; }}
bool IsVowel(char c){
    c=(char)tolower(c);
    if(c=='y'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){return true;
    }else {return false; }}
bool Isspace(char c){
    if (c== ' '){return true;}else{return false;}}
bool IsConsonant(char c){
    if ( IsPunctuation(c) || IsVowel(c) || Isspace(c)){return false;
    } else { return true;}}
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
