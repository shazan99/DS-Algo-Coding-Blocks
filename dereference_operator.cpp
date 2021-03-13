#include <iostream>
using namespace std;

int main()
{
	int x=10;
	int *xptr;
	xptr = &x;

	cout<< &x <<endl;
	cout<< xptr <<endl;

	cout<<*(&x) <<endl;
	cout<< *(xptr) <<endl;

	cout<< *(&xptr) <<endl;
	cout<< &(*xptr) <<endl;

	//Double Pointer

	cout<<&xptr <<endl;

    int **xxptr= &xptr;
	cout<< xxptr <<endl;
	//So line number 21 and line number 24 will give the same output

	return 0;

}