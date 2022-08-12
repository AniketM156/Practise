#include<iostream>
using namespace std;
int Sum(int n){
    int sum;
    sum=n*(n+1)/2;
    cout<<sum<<endl;
    return sum;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int n;
    cin>>n;
    Sum(n);
	return 0;
}