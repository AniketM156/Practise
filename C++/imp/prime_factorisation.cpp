#include<iostream>
using namespace std;
//functons if n=any
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	//prime factorizaton
	//9-6-21
    int n;
    cin>>n;
    int spf[n+1]={0}; //initialise entire matrix with zero
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j =i*i;j<=n;j +=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }
    for(int i=2 ;i<n;i++){
        cout<<"the factor of "<<i<<"is : "<<spf[i]<<endl;
        
    }


	return 0;
}