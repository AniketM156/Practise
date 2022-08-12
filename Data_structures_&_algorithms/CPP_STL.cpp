#include<iostream>
#include<bits/stdc++.h>//not in interview since requires more space
using namespace std;
int main(){
    array<int , 4> arr = {2,3,5,6};
    for(int i = 0;i<4;i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    //cout<<"begin : "<<arr.begin()<<endl;
    //cout<<"begin : "<<*(arr.begin())<<endl;
    //cout<<"rbegin"<<arr.rbegin()<<endl;
    for(auto it:arr){
        cout<<it<<endl;
    }
    string a = "ANIKET";
    for(auto count:a){
        cout<<count<<" ";
    }
    //int bigarr[100000000];
    //bigarr[100000000] = 10;
    //cout<<bigarr[100000000]<<endl;




    return 0;
}