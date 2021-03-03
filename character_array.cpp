#include <iostream>
using namespace std;

int main()
{
	int a[10]={1,2,3,4};
	char ch[10]= {'a','b','c','d','e','f', '\0'};
	cout<<ch<<endl;
	cout<<a[1]<<endl;

	//Input for character array
	char s[]= {'h','e','l','l','o','\0'}; /*It is important to terminate each string by a null character(\0)
	                                        otherwise it prints garbage value*/
	char s2[]="hello";
	cout<<s<<" "<<sizeof(s)<< endl;
	cout<<s2<<" "<<sizeof(s2)<< endl;

	char s3[10]="hello";
	char s4[10];  //Another way of taking input and it doesn't involve the use of loops.
	cin>>s4;
	cout<<s4<< endl;



	return 0;
}