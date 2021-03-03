#include <iostream>
using namespace std;

//Bubble Sort
void bubble_sort(int arr[], int n) {

	//N-1 large elements to the end
	for(int itr=1;itr<=n-1;itr++) {

		//Pairwise Swapping in the unsorted part of the array
		for(int j=0;j<=(n-itr-1);j++) { /*For better complexity we compare with n-itr-1
		                                because the other part is already sorted and it will be a waste of computations*/
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}

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
	bubble_sort(arr,n);
	for(int i=0;i<n;i++) 
	{
		cout<<arr[i]<<",";
	}
	return 0;
}