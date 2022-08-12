#include<iostream>
using namespace std;
//functons if n=any
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	//Matrix search for element k 
	//8-6-21
    int n , m , k;
    cin>>n>>m>>k;
    int arr[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    int count = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j] == k ){
                cout<<"the element is at : "<<i<<" "<<j<<endl;
                count = 1;
            }
            else if(count == 0 && (i ==n && j ==m)){
                cout<<"element not found";
            }
        }
    }
    
	return 0;
}