#include<iostream>
using namespace std;
//LINEAR SEARCH
int Linearsearch(int arr[] , int n , int key){
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            return i ;
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
    int n ;
    cin>>n;

    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    int key;
    cin>>key;
    
    cout<<Linearsearch(arr , n , key)<<endl;
	return 0;
}