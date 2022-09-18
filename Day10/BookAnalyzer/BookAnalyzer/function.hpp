//
//  function.hpp
//  BookAnalyzer
//
//  Created by 徐晨 on 9/12/22.
//

#ifndef function_hpp
#define function_hpp

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
#endif /* function_hpp */
string find_title(vector<string> content);
string find_Author(vector<string> content);
string find_longest(vector<string> content);
string find_shortest(vector<string> content);
void word_analyse (vector<string> content, string test, int all);
