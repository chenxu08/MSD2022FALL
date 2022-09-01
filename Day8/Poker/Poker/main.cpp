//
//  main.cpp
//  Poker
//
//  Created by chenxu on 8/31/22.
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
    int s=0;
    int f=0;
    int sf=0;
    int r=0;
    int fh=0;
    int n =0;
    int t=0;
    while (t<=2000){
    while (n<=2000){
    srand(int(time(0)));
    for(int i =0 ; i < 5 ; i++){
        int x= (rand() % 52) ;
        onehand.push_back(cards[x]);
    }

    if (isStraight (onehand)){s=s+1;}
    if (isFlush (onehand)){f=f+1;}
    if (isStraightFlush (onehand)){sf=sf+1;}
    if (isRoyalFlush (onehand)){r=r+1;}
    if (isFullHouse (onehand)){fh=fh+1;}
        n=n+1;
    }
        t=t+1;}
    
    cout << s <<"\n";
    cout << f <<"\n";
    cout << sf <<"\n";
    cout << r <<"\n";
    cout << fh <<"\n";



    
    
    
    

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
