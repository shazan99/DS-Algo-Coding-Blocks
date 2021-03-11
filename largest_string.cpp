#include <bits/stdc++.h>
using namespace std;

/* Question is - Read N, followed by N strings and print the largest string and it's length */
/* We will not store all the strings. In this we will use largest string and current string , so if current string is larger, we will
update the largest string.*/
int main()
{
	int n;
	cin>>n;

	char a[1000];
	char largest[1000];

	int len=0;
	int largest_len=0;

	cin.get(); /*We use this because cin.getline actually reads "\n" as first string 
	            which is in buffer to avoid it we are using cin.get(). */

	for(int i=0;i<n;i++)
	{
		cin.getline(a,1000);
		//cout<< a <<endl;
		len =strlen(a);

		if(len > largest_len)
		{
			largest_len= len;
			strcpy(largest, a); //To copy largest string from array a to largest array
		}
	}

	cout<<largest<<" and "<<largest_len<<endl;

	return 0;
}