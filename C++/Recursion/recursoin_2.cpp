#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==true){
        return true;
    }
    bool restArray = sorted(arr+1,n-1);
    if(arr[0]<arr[1] && restArray){
        return true;
    }
    return false;
}
int main()
{
	//Recursion 2
	//22-06-21
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sorted(arr,n);
	return 0;
}