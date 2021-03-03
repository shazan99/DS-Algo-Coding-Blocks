#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>> arr[i];
	}
	//Sort an array using sort() function
	sort(arr,arr+n);

	for(int i=0;i<n;i++) {
		cout<<arr[i]<<",";
	}
	return 0;
}