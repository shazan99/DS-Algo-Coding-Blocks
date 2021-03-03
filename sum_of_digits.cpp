#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	while (n>0)
	{ 
		int last_d= n%10;
		sum+= last_d;
		n = n/10;

	}
	cout<<"Sum of digits is = "<<sum<<endl;
}