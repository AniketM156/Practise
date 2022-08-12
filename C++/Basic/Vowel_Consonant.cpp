#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int c;
    int lower_consonant , upper_consonant
	cout<<"Enter the alphabet of your choice"<<endl;
    cin>>c;

    lower_consonant = (c=="a"||c=="e"||c=="i"||c=="o"||c=="u");

    upper_consonant = (c=="A"||c=="E"||c=="I"||c=="O"||c=="U");

    if(lower_consonant || upper_consonant){
        cout<<c<<" Is a vowel"<<endl;
    }
    else{
        cout<<c<<" Is a consonant"<<endl;
    }
	return 0;
    //some error
}
