#include<iostream>
using namespace std;
void chek(int x,int y,int z){
    int a=x;
    int b=y;
    int c=z;
    if(a*a == b*b +c*c){
        cout<<"yes it is a triplet"<<endl;
    }
    else if(b*b == a*a +c*c){
        cout<<"yes it is a triplet"<<endl;
    }
    else if(c*c == b*b +a*a){
        cout<<"yes it is a triplet"<<endl;
    }
    else{
        cout<<"no it isint"<<endl;
    }
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int a,b,c;
    cin>>a>>b>>c;
    chek(a,b,c);    
	return 0;
}