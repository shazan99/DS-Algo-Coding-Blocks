#include<iostream>
#include <climits>
using namespace std;

int largest(int arr[], int n) {
	int large=INT_MIN;
	for(int i=0;i<n;i++) {
		large=max(large,arr[i]);
	}
	return large;

}
int main() {
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<largest(arr,n);
	return 0;
}