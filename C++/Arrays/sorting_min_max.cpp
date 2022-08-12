#include<iostream>
#include<climits>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int n ;
    cin>>n;
    int maxno = INT_MIN , minno = INT_MAX ; 
    int array[n];
    for(int i=0 ;i<n;i++){
        cin>>array[i];
    }
    for(int i = 0;i<n;i++){
        maxno = max(maxno,array[i]);
        minno = min(minno , array[i]);

    }
    cout<<"the maximum number is : "<<maxno<<endl;
    cout<<"the minimum number is : "<<minno<<endl;



	return 0;
}