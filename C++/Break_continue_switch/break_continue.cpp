#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" ,stdin);
		freopen("output.txt" , "w" ,stdout);
	#endif
    int pocketmoney = 3000;
    for(int date = 0; date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney = 0){
            break;
        }
        cout<<"go out today"<<endl;
        pocketmoney = pocketmoney - 300;
    }
	return 0;
}