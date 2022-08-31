//
//  main.cpp
//  Cards
//
//  Created by chenxu on 8/31/22.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct card{
    int card_num;
    string card_type;
};
vector<card> buildcards();
void printcards (vector<card> cards);
int main(int argc, const char * argv[]) {
    vector<card> cards = buildcards();
    printcards (cards);
    return 0;
}

vector<card> buildcards(){
    vector<string> type = {"Spade","Heart","Club","Diamond"};
    vector<card> cards;
    for (int i = 2; i <= 14; i++){
        for(int j =0; j < 4; j++){
            card a= {i,type[j]};
            cards.push_back(a);
        }
    }
    return cards;
}
void printcards (vector<card> cards){
    for (int i =0 ; i< cards.size(); i++){
        if(cards[i].card_num == 11){
            cout << "The card number is Jack and the card type is "<< cards[i].card_type << "\n";
        }else if (cards[i].card_num == 12){
            cout << "The card number is Queen and the card type is "<< cards[i].card_type << "\n";
        }else if (cards[i].card_num == 13){
            cout << "The card number is King and the card type is "<< cards[i].card_type << "\n";
        }else if (cards[i].card_num == 14){
            cout << "The card number is Ace and the card type is "<< cards[i].card_type << "\n";
        }else {
            cout <<"The card number is "<< cards[i].card_num << " and the card type is " << cards[i].card_type << "\n";}
    }
}
