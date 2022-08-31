//
//  main.cpp
//  PoliStructs
//
//  Created by chenxu on 8/30/22.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct politician{
    string name;
    string party;
    string where;
};
vector<politician> Javacans(vector<politician> people);
vector<politician> federalCplusers (vector<politician> people);

int main(int argc, const char * argv[]) {
    politician Alex {"Alex","Cplusers","state"};
    politician Alice {"Alice","Cplusers","federal"};
    politician Ben {"Ben","Javacans","state"};
    politician Bob {"Bob","Javacans","federal"};
    politician Lucas {"Lucas","Cplusers","federal"};
    politician Louis {"Louis","Javacans","federal"};
    vector<politician> politicians = {Alex, Alice, Ben, Bob, Louis, Lucas};
    vector<politician> people_in_j = Javacans (politicians);
    cout << "The people in Javacans: \n" ;
    for (int i = 0 ; i< people_in_j.size();i++){
        cout << people_in_j[i].name << " works in " << people_in_j[i].where << ".\n";
    }
    cout << endl;
    vector<politician> people_in_federalCplusers = federalCplusers (politicians);
    cout << "The people in Javacans: \n" ;
    for (int i = 0 ; i< people_in_federalCplusers.size();i++){
        cout << people_in_federalCplusers[i].name << " belongs to "<<people_in_federalCplusers[i].party << " and works in " << people_in_federalCplusers[i].where << ".\n";
    }
    return 0;
}
vector<politician> Javacans(vector<politician> people){
    vector <politician> Javacans;
    for (int i=0; i<people.size();i++){
        if (people[i].party =="Javacans"){
            Javacans.push_back(people[i]);
        }
    }
    return Javacans;
};

vector<politician> federalCplusers (vector<politician> people){
    vector <politician> federalCplusers;
    for (int i=0; i<people.size();i++){
        if (people[i].party =="Cplusers" && people[i].where =="federal"){
            federalCplusers.push_back(people[i]);
        }
    }
    return federalCplusers;
}
