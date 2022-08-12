#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    cout<<"hello world"<<endl;
    s.insert(10);
    s.insert(100);
    if(s.find(10)==s.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    return 0;

}