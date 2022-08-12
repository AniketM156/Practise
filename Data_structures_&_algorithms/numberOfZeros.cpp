#include<iostream>
using namespace std;
int NoZero(int n){
    int count = 0;
    if(n=0){
        return count++; 
    }
    else if (n>0||n<9){
        return count;
    }
}
int main(){
    int n;
    cin>>n;
    
    NoZero(n);
    return 0;
}