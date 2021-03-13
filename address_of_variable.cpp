#include <iostream>
using namespace std;

int main()
{
	int x=10;
	cout<< &x <<endl;

	float y= 10.5;
	cout<< &y <<endl;

	//It does not work for character variables,this happens coz of operator overloading
	char ch='a';
	cout<< &ch <<endl; //this will give 'a' as an output.

	//there's a way to work around it which is using (void*) 

	char c='A';
	//this is Explicit type casting from char* to void*
	cout<<(void*)&ch <<endl;

	//Pointers

	int *xptr;
	xptr= &x;
	cout<< xptr <<endl;  //This is same as cout<<&x

	//Re-assign another address to the variable

	int y1=20;

	xptr = &y1;
	cout << &y1 <<endl;
	return 0;
}