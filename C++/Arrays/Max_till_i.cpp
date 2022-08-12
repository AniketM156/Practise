#include<iostream>
#include<climits>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    //MAX TILL I
	int n;
	cin>>n;
	int mat[n];
	for(int i=0;i<n;i++){
		cin>>mat[i];
	}
	int mx = INT_MIN;
	for(int i=0;i<n;i++){
		mx = max(mx,mat[i]);
        cout<<mx<<" ";
    }
	
	return 0;
}