#include<iostream>
using namespace std;
void primesieve(int n){
    int prime[100]={0};
    for(int i = 2;i<n;i++){
        if(prime[i]==0){
            for(int j = i*i;j<n;j+=i){
                prime[j] = 1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	//seive of eratosthenes 
	//9-6-21
    primesieve(50);

	return 0;
}