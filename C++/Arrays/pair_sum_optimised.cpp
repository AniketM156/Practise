#include<iostream>
using namespace std;
//functons if n=any
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	//pair sum optimised
	//7-6-21
    int n , k;
    cin>>n; 
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0 , high = n-1 ; 

    while(low<high){
        if(k==arr[low]+arr[high]){
            cout<<arr[low]<<arr[high]<<endl;
        }
        else if(arr[low]+arr[high]<=k){
            low++;
        }
        else{
            high--;
        }
    }
	return 0;
}