#include<iostream>
using namespace std;
//functons if n=any
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	//spiral order matrix traversal
	//8-6-21
    int n , m ;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 1;i<=n ;i++){
        for(int j = 1;j<=m ;j++){
            cin>>arr[i][j];
        }
    }

    
    int row_start = 0 , row_end = n-1;
    int colum_start = 0 , colum_end = m-1;
    while(row_start<=row_end && colum_start <= colum_end){
        //for row_start
        for(int col = colum_start;col<=colum_end; col++){
            cout<<arr[row_start][col];
        }
        row_start++;

        //for colum_end
        for(int r = row_start;r<=row_end; r++){
            cout<<arr[r][colum_end];
        }
        colum_end--;

        //for row_end
        for(int col = colum_end;col>=colum_start; col--){
            cout<<arr[row_end][col];
        }
        row_end--;

        //for colum_end
        for(int r = row_end;r>=row_start; r++){
            cout<<arr[r][colum_end];
        }
        colum_end--;
    }
	return 0;
}