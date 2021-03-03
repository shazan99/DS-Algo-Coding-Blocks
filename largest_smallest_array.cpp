#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	cin>>n;

	int arr[1000];

	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	//Algo to find largest and smallest number in an array

	int largest= INT_MIN;
	int smallest= INT_MAX;

	for(int i=0;i<n;i++) {
//USing inbuilt max and min functions :
		largest=max(largest,arr[i]);
		smallest=min(smallest,arr[i]);



		//This is the if-Else method

		// if(arr[i]>largest) {
		// 	largest= arr[i];
		// }
		// if(arr[i]<smallest) {
		// 	smallest=arr[i];
		// }
	}
	cout<<"Largest : "<<largest<<endl;
	cout<<"Smallest : "<<smallest<<endl;

	return 0;

}