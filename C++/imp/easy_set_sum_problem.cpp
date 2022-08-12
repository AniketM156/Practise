#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int setA[n];
	for(int i=0;i<n;i++){
		cin>>setA[i];
		}
	int m;//number of elemnts in C
	cin>>m;
	int setC[m];
	for(int j=0;j<m;j++){
		cin>>setC[j];
	}
	int setB[n+m];
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			setB[count] = setC[i] - setA[j]; 
			count++;
		}
	}
	for(int k=0;k<n+m;k++){
		cout<<setB[k]<<" ";
	}
	cout<<endl;
	cout<<" n : "<<n<<endl;
	cout<<" m : "<<m<<endl;
}