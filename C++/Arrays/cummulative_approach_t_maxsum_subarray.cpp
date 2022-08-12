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
	//subarray cummulative approach 
	//7-6-21                        
    //soem error which i dnt know (:/)
    int n;                         
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cumsum[n+1];
    cumsum[0] = 0;
    for(int i = 1;i<n;i++){
        cumsum[i] = cumsum[i-1]+arr[i-1];
    }
//    For printing out cummulative sum
//    for(int i=1;i<n;i++){
//        cout<<cumsum[i]<<" ";
//    }
    int maxsum = INT_MIN;
    for(int i =1 ;i<n;i++){
        int sum=0;
        maxsum = max(maxsum,cumsum[i]);
        for(int j=0;j<i;j++){
            sum = cumsum[i]-cumsum[i-1];
            maxsum = max(maxsum,cumsum[i]);
        }
    }
    cout<<maxsum<<endl;
	return 0;
}