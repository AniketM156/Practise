#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
	char op;
	cout<<"enter a alphabet"<<endl;
	cin>>op;
	
	switch(op)
	{
	case 'a':
		cout<<"Vowel"<<endl;
		break;

	case 'e':
		cout<<"Vowel"<<endl;
		break;

	case 'i':
		cout<<"Vowel"<<endl;
		break;

	case 'o':
		cout<<"Vowel"<<endl;
		break;
    
    case 'u':
		cout<<"Vowel"<<endl;
		break;


	default:
		cout<<"consonant"<<endl;
		break;
	}
	return 0;
}