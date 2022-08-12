#include<iostream>
using namespace std;
int Binarysearch(int arr[],int n,int key){
    //function for binary search
    int s=0,e=n;//intialising
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0 ; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<Binarysearch(arr,n,key);
	return 0;
}