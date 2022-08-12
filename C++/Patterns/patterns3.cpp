#include<iostream>
using namespace std;
int main(){
    int count=1,row,col;
    cout<<"enter rows & colums"<<endl;
    cin>>row>>col;
    for(int i = 1;i <= row; i++){
        for(int j = 1;j<i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}
