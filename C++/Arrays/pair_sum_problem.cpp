#include<iostream>
using namespace std;
//functons if n=any
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	//pair sum problem brut force
	//7-6-21
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<"elements are : "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
	return 0;
}