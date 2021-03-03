#include <iostream>
using namespace std;

int main() {
	int arr[100],key,i;
	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the elements of array :"<<endl;

	for(i=0;i<n;i++) {
		cin>>arr[i];
	}

	cout<<endl;
	cout<<"Enter the element to be searched : ";
	cin>>key;

	for(i=0;i<=n-1;i++) {
		if (arr[i]==key)
		{
			cout<<key<<" found at "<<i<<" index";
			break;
		}
	}
	if (i==n) {
		cout<<key<<" Not Found"<<endl;
	}
	return 0;	
	}
	
