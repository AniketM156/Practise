#include<iostream>
using namespace std;
//functons
int firstocc(int arr[],int n,int i,int k){
    if(i==n){
        return -1;
    }
    if(arr[i]==k){
        return i;
    }
    return firstocc(arr,n,i+1,k);
}
int main()
{
	//first and last occurunce 
	//26-06-21
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i,k,t;
    cin>>k;
    t = firstocc(arr,n,i,k);
    cout<<t<<endl;
	return 0;
}