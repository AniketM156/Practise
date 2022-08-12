#include<iostream>
#include<math.h>
using namespace std;
void isprime(int num){
    for(int i=0;i<sqrt(num);i++){
        if(num%i == 0){
            return false;
        }
    }
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int a , b ;
    cin>>a>>b;
    for(int i = a ; i <=b;i++){
        if(isprime(i) == false){
            cout<<i<<endl;
        }
    }
	return 0;
}