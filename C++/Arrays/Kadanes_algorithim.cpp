#include<iostream>
#include<climits>
using namespace std;
//functons if n=any
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	//Kadanes algorithim
	//7-6-21 
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum =0 , currsum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    for(int i=0;i<n;i++){
        currsum +=arr[i];
        if(currsum<0){
            //for negetive numbers
            currsum = 0;
        }
        maxsum = max(maxsum,currsum); 
        cout<<"maxsum for "<<arr[i]<<"  "<<maxsum<<endl;
    }
    cout<<"final maxsum is : "<<maxsum<<endl;
	return 0;
}