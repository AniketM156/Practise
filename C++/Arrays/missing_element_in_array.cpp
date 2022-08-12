#include<iostream>
using namespace std;
//functons if n=any
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	//smallest missing no. in aray
	//7-6-21
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6 +2;
    bool chek[N];
	for(int i=0;i<N;i++){
        chek[i]=false;// or 0
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            chek[arr[i]] = true;
        }
    }

    int ans = -1;
    for(int i=1;i<N;i++){
        if(chek[i] == false){
            ans = i;
            break;
        }
    }
    cout<<"the answer is : "<<ans;
    return 0;
}