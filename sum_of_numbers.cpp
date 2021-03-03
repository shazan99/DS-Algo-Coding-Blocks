#include <iostream>
using namespace std;

int main()
{
	// program to calculate sum of numbers from 1 to N
	int n;
	cin>>n;

	int i=1;
	int sum=0;
	while (i<n)
	{
		sum += i;
		i++;
	}
	cout<<"Sum of numbers="<<sum<<endl;

	return 0;
}