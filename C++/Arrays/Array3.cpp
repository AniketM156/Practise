#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int n , sum = 0;
    cin>>n;
    int array[n];
    
    for(int i=0;i<n;i++){
            cin>>array[i];
    }
    for(int i=0;i<n;i++){
            cout<<array[i]<<endl;
    }
    for(int j=0;j<n;j++){
        sum = sum + array[j];
    }
    cout<<sum<<endl;
	return 0;
}