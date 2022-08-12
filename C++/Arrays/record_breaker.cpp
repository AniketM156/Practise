#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    //Record Breaker
    //initialising values and input of array
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //last o no following value
    a[n]=-1;
    //for only one value entred
    if(n==1){
        cout<<"1"<<endl;
    }
    int ans = 0;
    int mx = -1;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            //condn 1&2
            ans++;
        }
        mx = max(mx,a[i]);
    }
    cout<<ans<<endl;
	return 0;
}