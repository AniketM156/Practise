#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    //REVERSE AN ARRAY
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int start=0;
    int end=n-1;
    while(start<end){
    int temp = 0;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
    }
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}