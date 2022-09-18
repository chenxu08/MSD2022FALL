//
//  main.cpp
//  BookAnalyzer
//
//  Created by 徐晨 on 9/12/22.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vector>
#include "function.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    string filename = argv[1];
    ifstream myStream( filename );
    if( myStream.fail() ) {
        cout << "Failed; to open; file: " << filename << ".\n";
    exit( 1 );  // Kill the program and exit with a return value of 1
    }
    vector<string> content;
    ifstream ifs(argv[1]);
    string str;
    int count =0;
    int char_number=0;
    while (ifs >> str){
        content.push_back(str);
        count ++;
        char_number=char_number+ str.size();
    }
    ifs.close();
    cout << "Statistics for "<<find_title(content)<< "by "<<find_Author(content)<<":\n";;
    cout << "Number of words: "<<count<<"\n";
    cout << "Number of characters:"<<char_number<< endl;
    cout << "The shortest word is '"<<find_shortest(content) <<"', and the longest word is '"<< find_longest(content)<<"'"<<endl;
    word_analyse(content, argv[2],char_number);
    return 0;
}
