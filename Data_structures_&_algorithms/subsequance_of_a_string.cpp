//Incomplete dynamic array creation error 
#include<iostream>
using namespace std;
int subs(string input,string output[]){
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    string smallinput = input.substr(1);
    int smalloutputsize = subs(smallinput,output);
    for(int j=0; j<smalloutputsize;j++){
        output[j + smalloutputsize] = input[0] + output[j];
    }
    return 2*smalloutputsize;
}
int main(){
    //string input; Error in taking input form cph judge
    //cin>>input;
    string input = "abc";
    string* output = new string[1000];
    int count = subs(input,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}