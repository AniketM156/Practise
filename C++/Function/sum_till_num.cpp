#include<iostream>
using namespace std;
int sum(int n){
    int ans = 0;
    for(int i =1;i<=n;i++){
        ans+=i;
    }
    return ans;
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int n ;
    cin>>n;
    cout<<sum(n)<<endl;
    
	return 0;
}