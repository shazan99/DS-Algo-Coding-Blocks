#include <iostream>
using namespace std;

// Print the following pattern for given N=5
/*ABCDE
ABCD
ABC
AB
A*/

void printABCDPattern(int n) {
	for(int i=1;i<=n;i++) {
		int count= n-i+1;
		char alphabet='A';

		for(int j=1;j<=count;j++) {
			cout<< alphabet;
			alphabet = alphabet+1;
		}
		cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	printABCDPattern(n);

	return 0;
}