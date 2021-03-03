#include <iostream>
using namespace std;

int main() {

	int a[10][10]={0};

	int val=1;
	for(int row=0; row<10; row++)
	{
		for(int col=0; col<10; col++)
		{
			a[row][col]=val;
			val=val+1;
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
