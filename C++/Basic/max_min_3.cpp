#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int a1,a2,a3;
	cout<<"enter the three numbers you wish"<<endl;
    cin>>a1>>a2>>a3;
    if(a1>a2){
        if(a1>a3){
            cout<<"the greatest number is : "<<a1<<endl;
        }
        else{
            cout<<"The greatest Number is : "<<a3<<endl;
        }
    }
    else{
        if(a2>a3){
            cout<<"the greatest number is : "<<a2<<endl;
        }
        else{
            cout<<"The greatest Number is : "<<a3<<endl;
        }
    }
	return 0;
}