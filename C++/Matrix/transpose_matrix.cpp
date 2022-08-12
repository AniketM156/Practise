#include<iostream>
using namespace std;
//functons if n=any
int main()
{
	//transpose matrix 
	//21-6-21
    int n , m;
    cin>>n>>m;
    int mat[n][m];
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = i;j<=m;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }

	return 0;
}