#include <iostream>
using namespace std;

//Pass by Reference using Pointers
void increment (int *aptr)
{
	*aptr=*aptr+1;
	cout<<"Inside Function : " << *aptr <<endl;
}

int main ()
{
	int a=10;
	increment(&a);
	cout<<"Inside Main : " <<a;

	return 0;
}

//In this method we are passing the reference of the variable and updating it.