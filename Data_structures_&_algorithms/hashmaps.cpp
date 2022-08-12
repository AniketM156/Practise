#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    cout<<"hello world"<<endl;;
    unordered_map<string ,int> ourmap;
    // insert 
    pair<string,int> p("this is one",1);
    ourmap.insert(p);
    ourmap["this is two"] = 2;

    cout<<"size of hashmap is "<<ourmap.size()<<endl;

    // find or acces elements
    cout<<ourmap["this is one"]<<endl;

    cout<<ourmap.at("this is two")<<endl;
    
    // cout<<ourmap.at("this is three")<<endl;

    cout<<ourmap["this is three"]<<endl;//insert default value

    // check if present
    if(ourmap["this is four"] > 0)  cout<<"present"<<endl;
    else cout<<"not present "<<endl;

    cout<<"size of hashmap is "<<ourmap.size()<<endl;

    return 0;
}