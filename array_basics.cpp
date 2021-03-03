#include <iostream>
using namespace std;

int main() {
	int a[10];
	int n;
	cout<<"Enter the number of elements" <<endl;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"Elements of array are: ";
	for(int i=0;i<n;i++) {
		cout<<a[i]<<",";
	}

	cout<<endl;

	//Size of array

	cout<<"The size of array in bytes is: "<<sizeof(a)<<endl;
	int x=sizeof(a)/sizeof(float);
	cout<<"Number of elements the array can accomodate is: "<<x<<endl;
	

	return 0;
}