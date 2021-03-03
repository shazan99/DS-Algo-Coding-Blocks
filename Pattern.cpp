#include <iostream>
using namespace std;

int main()
{
	int n=0;
	cin>>n;

	int row=1;
	while(row<=n) {
		int col=1;

		if (row%2 !=0) {
			while(col<=row) {
			cout<<1;
			col+=1;
		}}
		else {
			cout<<1;
			while (col<=row-2)
			{
				cout<<0;
				col+=1;
			}
			cout<<1;
		}	
		}
	}
	
	return 0;
}