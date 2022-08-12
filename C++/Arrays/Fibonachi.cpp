#include<iostream>
using namespace std;

void Fibonachi(int n){
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=0;i<=n;i++){
        cout<<t1<<endl;
        nextterm = t1+t2;
        t1=t2;
        t2 = nextterm;
    }
    return ;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int n;
    cin>>n;
    Fibonachi(n);
	return 0;
}