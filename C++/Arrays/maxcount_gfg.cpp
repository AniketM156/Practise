#include<iostream>
#include<climits>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    //majority element 
    //question of geeks for geeks
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int maxcount = 0;
    int index = -1;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;

            }
        }
        if(count>maxcount){
        maxcount = max(maxcount,count);
        index = i;
        }
    }
    
    if(maxcount>n/2){
        cout<<"the max count "<<maxcount<<" is of "<<arr[index ]<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
	return 0;
}