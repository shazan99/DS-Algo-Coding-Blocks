#include<iostream>
using namespace std;

int main() {
	int min,max,step,i=0;
	int x;
	cin>>min;
	cin>>max;
	cin>>step;

	for(i=0;i<=max;i=i+step)
	{
		x=(5*((min+i)-32)/9);
		cout<<min+i<<" "<<x<<endl;
	
	}

	return 0;
}