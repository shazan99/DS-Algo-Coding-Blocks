#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[1000];
	int maxSum=0;
	int currentSum=0;

	int left =-1;
	int right = -1;
	for(int i=0;i<n;i++) {
		cin>>a[i];

	}

	//Generate all Subarrays
	for(int i=0;i<n;i++) {
		for(int j=i;j<n;j++) {

			//This loop prints sum of all subarrays.
			currentSum=0;
			for(int k=i;k<=j;k++) {
				currentSum+=a[k];
			}
			//Update maxSum if cs>maxSum
			if(currentSum>maxSum)
			{
				maxSum=currentSum;
				left=i;
				right=j;
			}
		}
	}
	//Print the maximum Sum
	cout<<"maximum Sum is "<<maxSum<<endl;

	//Print the subarray
	for(int k=left;k<=right;k++)
	{
		cout<<a[k]<<",";
	}

	return 0;
}