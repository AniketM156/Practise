#include<iostream>
using namespace std;
//functons if any
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum = sum(n-1);
    return n+ prevSum;
}

int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPow = power(n,p-1);
    return n*prevPow;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int prevfact = fact(n-1);
    return n*prevfact;
}
int fibonachi(int n){
    if(n==0||n==1){
        return 0;
    }
    return fibonachi(n-1) + fibonachi(n-2);
}
int main()
{
	//Recursion 
	//22-06-21
    cout<<sum(4)<<endl;
    cout<<power(4,2)<<endl;
    cout<<fact(4)<<endl;
    cout<<fibonachi(7)<<endl;
	return 0;
}