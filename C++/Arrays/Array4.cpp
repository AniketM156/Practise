#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int n , max = 0;
    cin>>n;
    int array[n];
    for(int i =0 ; i<n ; i++){
        cin>>array[i];
    }
    for(int i=0 ; i<n;i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    cout<<max<<endl;
	return 0;
}