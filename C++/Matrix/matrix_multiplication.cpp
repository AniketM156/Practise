#include<iostream>
using namespace std;
//functons if n=any
int main()
{
	//matrix multiplication
	//21-6-21 
    int n1 , n2 , n3;
    cin>>n1>>n2>>n3;
    int mat1[n1][n2];
    for(int i = 1;i<=n1;i++){
        for(int j = 1;j<=n2;j++){
            cin>>mat1[i][j];
        }
    }

    int mat2[n2][n3];
    for(int i = 1;i<=n2;i++){
        for(int j = 1;j<=n3;j++){
            cin>>mat2[i][j];
        }
    }

    int ans[n1][n3];
    for(int i = 1;i<=n1;i++){
        for(int j = 1;j<=n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j] +=mat1[i][k]*mat2[k][j];
            }
        }
    }
	return 0;
}