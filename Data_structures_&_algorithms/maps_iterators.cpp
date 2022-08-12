#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<string,int> ourmap;
    ourmap["abc0"] = 1;
    ourmap["abc1"] = 2;
    ourmap["abc2"] = 3;
    ourmap["abc3"] = 4;
    ourmap["abc4"] = 5;    
    ourmap["abc5"] = 6;
    unordered_map<string,int> :: iterator it = ourmap.begin();
    while(it !=ourmap.end()){
        cout<<"Key "<<it->first<<" Value : "<<it->second<<endl;
        it++;
    }

    // find 
    // cout<<ourmap.find("abc0")<<endl;
    
    return 0;
}