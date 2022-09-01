//
//  main.cpp
//  Multifile
//
//  Created by chenxu on 8/29/22.
//

#include <iostream>
#include <string>
#include "LetterHelpers.hpp"
#include "restfunction.hpp"

using namespace std;
//bool IsTerminator(char c);
//bool IsPunctuation(char c);
//bool IsVowel(char c);
//bool Isspace(char c);
//bool IsConsonant(char c);
//int NumWords(string s);
//int NumSentences(string s);
//int NumVowels(string s);
//int NumConsonants(string s);
//double AverageWordLength(string s);
//double AverageVowelsPerWord(string s);
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
