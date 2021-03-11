#include <iostream>
#include <cstring>
using namespace std;

string extractStringAtKey(string str, int key)
{
	//strtok
	char *s=strtok((char *)str.c_str()," ");
	while(key>1)
	{
		s=strtok(NULL," ");
		key--;
	}
	return (string)s;
}

int main()
{
	int n;
	cin>>n;
	cin.get();
	stirng a[100];
	for(int i=0;i<n;i++)
	{
		getline(cin,a[i]);
	}

	int key;
	string reversal,ordering;

	pair<string>,string> strPair[100];

	for(int i=0;i<n;i++)
	{
		strPair[i].first = a[i];
		strPAir[i].first = extractStringAtKey(a[i],key);
	}

	//Sorting 

	if(ordering=="numeric")
	{
		sort(strPair,strPair+n,numericCompare);
	}

}