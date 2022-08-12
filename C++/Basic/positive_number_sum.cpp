#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	int number , sum = 0;
    cout<<"enter a positive number"<<endl;
    cin>>number;
    while(number>0){
        sum = sum + number;
        cout<<"enter a positive number"<<endl;
        cin>>number;
    
    }
    cout<<"\n The sum is "<<sum<<endl;
	return 0;
}