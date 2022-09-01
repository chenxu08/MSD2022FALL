//
//  restfunction.hpp
//  Multifile
//
//  Created by chenxu on 8/29/22.
//

#ifndef restfunction_hpp
#define restfunction_hpp
#include <stdio.h>
#include <string>
using namespace std;

bool IsTerminator(char c);
bool IsPunctuation(char c);
bool Isspace(char c);
int NumWords(string s);
int NumSentences(string s);
double AverageWordLength(string s);
double AverageVowelsPerWord(string s);
#endif /* restfunction_hpp */
