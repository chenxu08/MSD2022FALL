//
//  main.cpp
//  Palindromes
//
//  Created by chenxu on 8/25/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string word;
    std::cout << "Enter a word:\n";
    cin >> word;
    string reverse;
    int x = word.length();
    for (int i = x-1 ; i>=0; i--){
        reverse = reverse + word[i];

    }
    if(word == reverse){
        cout << word << " is a palindrome.\n";
    }else{
        cout << word << " is not a palindrome.\n";
    }
    return 0;
}
