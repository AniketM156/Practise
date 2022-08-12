#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int n , sum = 0 ;
	cout<<"enter the number till you want to find the sum"<<endl;
    cin>>n;
    for(int i = 1 ; i < n+1; i++){
        sum = sum+i;
    }
    cout<<"The sum is : "<<sum<<endl;
	return 0;
}