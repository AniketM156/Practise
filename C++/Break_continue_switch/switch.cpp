#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	int n1 , n2 ;
	char op;
	cout<<"enter the two numbers"<<endl;
	cin>>n1>>n2;
	cout<<"enter operator + - * /"<<endl;
	cin>>op;
	switch(op)
	{
	case '+':
		cout<<n1 + n2<<endl;
		break;

	case '-':
		cout<<""<<n1 - n2<<endl;
		break;

	case '*':
		cout<<""<<n1 * n2<<endl;
		break;

	case '/':
		cout<<""<<n1 / n2<<endl;
		break;

	default:
		cout<<"you presed something wrong"<<endl;
		break;
	}
	return 0;
}