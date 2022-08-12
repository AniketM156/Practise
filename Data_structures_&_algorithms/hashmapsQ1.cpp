#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
vector<int> removeDuplicate(int* a,int size){
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++){
        if(seen.count(a[i]>0)) continue;
        seen[a[i]] = true;
        output.push_back(a[i]);
    }
    return output;
}
int main(){
    cout<<"hello world"<<endl;
    int a[] = {1,2,3,4,5,6,1,2,3,4,7,8,3,4};
    vector<int> result = removeDuplicate(a,14);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;  
    }
    return 0;
}