#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};

    array<int,4> a={1,2,3,4};// Made array with the help of STL
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
 
cout<<"2nd elemnt : "<<a.at(2)<<endl;
cout<<"empty? : "<<a.empty()<<endl;


}