//
//  main.cpp
//  poker_test
//
//  Created by 徐晨 on 9/1/22.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
struct card{
    int card_num;
    string card_type;
};
vector<card> buildcards();
bool isStraight (vector<card> x);
bool isFlush(vector<card> x);
bool isStraightFlush(vector<card> x);
bool isRoyalFlush(vector<card> x);
bool isFullHouse(vector<card> x);

int main(int argc, const char * argv[]) {
    vector<card> cards=buildcards();
    vector<card> onehand;
    card a = {3,"Spade"};
    card b = {3,"Heart"};
    card c = {3,"Club"};
    card d = {5,"Spade"};
    card e = {6,"Spade"};
    card f = {4,"Spade"};
    card g = {5,"Diamond"};
    card h = {7,"Spade"};
    card i = {11,"Club"};
    card j = {10,"heart"};
    card k = {10,"Spade"};
    card l = {11,"Spade"};
    card m = {12,"Spade"};
    card n = {13,"Spade"};
    card o = {14,"Spade"};
    vector<card> hand1= {a,b,c,d,e};
    vector<card> hand2= {m,n,j,l,o};
    vector<card> hand3= {m,n,h,l,o};
    vector<card> hand4= {a,d,e,f,h};
    vector<card> hand5= {m,o,k,n,l};
    vector<card> hand6= {i,j,k,l,m};
    vector<card> hand7= {a,d,g,b,c};

    if (isStraight (hand1)){
        for(int i =0; i < hand1.size();i++){
            cout<< hand1[i].card_num<<hand1[i].card_type;}
        cout << " is straight.\n";
    }else {
        for(int i =0; i < hand1.size();i++){
            cout<< hand1[i].card_num<<hand1[i].card_type;}
        cout << " is not straight.\n";
    }
    if (isStraight (hand2)){
        for(int i =0; i < hand2.size();i++){
            cout<< hand2[i].card_num<<hand2[i].card_type;}
        cout << " is straight.\n";
    }else {
        for(int i =0; i < hand2.size();i++){
            cout<< hand2[i].card_num<<hand2[i].card_type;}
        cout << " is not straight.\n";
    }
    if (isFlush (hand1)){
        for(int i =0; i < hand1.size();i++){
            cout<< hand1[i].card_num<<hand1[i].card_type;}
        cout << " is Flush.\n";
    }else {
        for(int i =0; i < hand1.size();i++){
            cout<< hand1[i].card_num<<hand1[i].card_type;}
        cout << " is not Flush.\n";
    }
    if (isFlush (hand3)){
        for(int i =0; i < hand1.size();i++){
            cout<< hand3[i].card_num<<hand3[i].card_type;}
        cout << " is Flush.\n";
    }else {
        for(int i =0; i < hand1.size();i++){
            cout<< hand3[i].card_num<<hand3[i].card_type;}
        cout << " is not Flush.\n";
    }
    if (isStraightFlush (hand2)){
        for(int i =0; i < hand1.size();i++){
            cout<< hand2[i].card_num<<hand2[i].card_type;}
        cout << " is Flush.\n";
    }else {
        for(int i =0; i < hand1.size();i++){
            cout<< hand2[i].card_num<<hand2[i].card_type;}
        cout << " is not Flush.\n";
    }
    if (isStraightFlush (hand4)){
        for(int i =0; i < hand1.size();i++){
            cout<< hand4[i].card_num<<hand4[i].card_type;}
        cout << " is StraightFlush.\n";
    }else {
        for(int i =0; i < hand1.size();i++){
            cout<< hand4[i].card_num<<hand4[i].card_type;}
        cout << " is not StraightFlush.\n";
    }
    if (isRoyalFlush (hand4)){
        for(int i =0; i < hand1.size();i++){
            cout<< hand4[i].card_num<<hand4[i].card_type;}
        cout << " is RoyalFlush.\n";
    }else {
        for(int i =0; i < hand1.size();i++){
            cout<< hand4[i].card_num<<hand4[i].card_type;}
        cout << " is not RoyalFlush.\n";
    }
    if (isRoyalFlush (hand5)){
        for(int i =0; i < hand1.size();i++){
            cout<< hand5[i].card_num<<hand5[i].card_type;}
        cout << " is RoyalFlush.\n";
    }else {
        for(int i =0; i < hand1.size();i++){
            cout<< hand5[i].card_num<<hand5[i].card_type;}
        cout << " is not RoyalFlush.\n";
    }
    if (isFullHouse (hand6)){
        for(int i =0; i < hand1.size();i++){
            cout<< hand6[i].card_num<<hand6[i].card_type;}
        cout << " is FullHouse.\n";
    }else {
        for(int i =0; i < hand1.size();i++){
            cout<< hand6[i].card_num<<hand6[i].card_type;}
        cout << " is not FullHouse.\n";
    }
    if (isFullHouse (hand7)){
        for(int i =0; i < hand1.size();i++){
            cout<< hand7[i].card_num<<hand7[i].card_type;}
        cout << " is FullHouse.\n";
    }else {
        for(int i =0; i < hand1.size();i++){
            cout<< hand7[i].card_num<<hand7[i].card_type;}
        cout << " is not FullHouse.\n";
    }


//    if (isStraight (onehand)){s=s+1;}
//    if (isFlush (onehand)){f=f+1;}
//    if (isStraightFlush (onehand)){sf=sf+1;}
//    if (isRoyalFlush (onehand)){r=r+1;}
//    if (isFullHouse (onehand)){fh=fh+1;}

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


bool isStraight (vector<card> x){
    int min = x[1].card_num;
    for (int i = 0; i < x.size(); i++){
        if (min > x[i].card_num){
            min = x[i].card_num;
        }
    }
    int max = x[1].card_num;
    for (int i = 0; i < x.size(); i++){
        if (max < x[i].card_num){
            max = x[i].card_num;
        }
    }
    int index;
    int index_1=0;
    int index_2=0;
    if (max-min==4){index_1=0;}else{index_1=1;}
    for (int i = 0 ;i<5;i++){
        for (int j =0;j<5;j++){
            if ((x[i].card_num==x[j].card_num)&&(i!=j)){index_2=1;}
        }}
        index=index_1+index_2;
    if (index == 0){return true;}else{return false;}
}

bool isFlush(vector<card> x){
    string index = x[0].card_type;
    int in=0;
    for (int i =0; i< x.size(); i ++){
        if(x[i].card_type != index){in=1;}
    }
    if (in==0){return true;}else{return false;}
}

bool isStraightFlush(vector<card> x){
    if(isFlush(x)&&isStraight(x)){
        return true;
    }else {return false;}
}

bool isRoyalFlush(vector<card> x){
    int min = x[1].card_num;
    for (int i = 0; i < x.size(); i++){
        if (min > x[i].card_num){
            min = x[i].card_num;
        }
    }
    if (isStraightFlush(x)&& min==10){
        return true;
    }else{return false;}
}
bool isFullHouse(vector<card> x){
    int difference = 0;
    for (int i =0;i<5;i++){
        if(x[0].card_num != x[i].card_num){
            difference=x[0].card_num -x[i].card_num;
        }
    }
    int full=0;
    int house=0;
    for (int j =0; j<5; j++){
        if ((x[0].card_num -x[j].card_num)==0){full=full+1;}
        if ((x[0].card_num -x[j].card_num)==difference){house=house+1;}
        
    }
    if (full == 3 && house ==2){return true;
    }else {return false;}
}
