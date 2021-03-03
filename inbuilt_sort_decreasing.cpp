#include <iostream>
#include <algorithm>
using namespace std;

// In this code we will use in-built sort function to sort an array in decreasing order
//Define a comparator function
bool comapare(int a , int b)
{
	cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a>b;
}

int main() {
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}

	//Sort an array using sort() function
	sort(arr,arr+n,comapare);
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<",";
	}
	return 0;

}