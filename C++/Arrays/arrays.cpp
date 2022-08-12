#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<a+b<<endl;
    return (a+b);
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif

    add(4,add(4,5));
    
	return 0;
}