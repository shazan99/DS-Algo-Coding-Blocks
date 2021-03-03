#include <iostream>
using namespace std;


//Insertion Sort
void insertion_sort(int arr[],int n) {
	for(int i=1;i<=n-1;i++) {
		int e=arr[i];
		//Place the current element in the 'right' position in the sorted part
		int j=i-1;
		while(j>=0 and arr[j]>e) {
			arr[j+1]= arr[j];
			j=j-1;
		}
		arr[j+1]=e;

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
	insertion_sort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<",";
	}
	return 0;
}