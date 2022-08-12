#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int a ,b ;
    cout<<"enter two number which you want to find greatest of"<<endl;
    cin>>a>>b;
    if(a > b){
        cout<<"The greatest number is : "<<a<<endl;
    }
    else{
        cout<<"The greatest number is : "<<b<<endl;
    }
	return 0;
}