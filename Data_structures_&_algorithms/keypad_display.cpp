#include<iostream>
using namespace std;
void (string input,string output){
    if(input.length()==0){
        cout<<output<<endl;
        return ;
    }
    key(input.substr(1),output);
    key(input.substr(1),output + input[0]);
    key()
}
int main(){
    int input;
    cin >> input;
    string output = "";
    key(input,output);
    return 0;
}