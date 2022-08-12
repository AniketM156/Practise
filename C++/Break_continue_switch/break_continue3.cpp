#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	int i,num,a,b;
    cin>>a>>b;
    for(num=a;num<b;num++){
        for(i=2;i<num;i++){
        if(num%i==0){
            cout<<"not prime"<<endl;
            break;
        }
    }
    if(i==num){
        cout<<"prime"<<endl;
    }
    }
    	return 0;
}