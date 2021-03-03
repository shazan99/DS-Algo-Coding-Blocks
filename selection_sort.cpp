#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {

	for(int i=0;i<n-1;i++) //When we have only one element left we don't need to do anything.
	{
		int min_index=i;
		for(int j=i;j<=n-1;j++) {
			if(arr[j] < arr[min_index])
			{
				min_index=j;
			}
		}
		swap(arr[i],arr[min_index]);
	}
}
int main() {
	int n;
	int arr[1000];
	cout<< "Enter the number of elements: ";
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>> arr[i];
	}
	selection_sort(arr,n);
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" , ";
	}
	return 0;

}