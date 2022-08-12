

#include <iostream>
using namespace std;
int main() {
	int n , count = 0;
	cin >> n ;		// Reading input from STDIN
	double W[n] , H[n] ;
	for(int i = 0;i<n;i++){
		cin>>W[i];
		cin>>H[i];
		
	}
	for(int i=0;i<n;i++){
		if(10*W[i]/H[i] >=16 && 10*W[i]/H[i] <= 17 || 
		10*H[i]/W[i] >=16 && 10*H[i]/W[i] <= 17){
			count++;
		}

	}

	cout<< count;	// Writing output to STDOUT
}

