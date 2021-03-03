#include <iostream>
using namespace std;

void sayHello() {
	cout<< "Hello Everyone!";
}

int factorial(int n) {
	int ans=1; 
	for(int i=2;i<=n;i++) {
		ans=ans * i;
	}
	return ans;
}

int main ()
{
	cout <<"Before Function call" <<endl;
	sayHello();
	cout << endl<<"After function call"<<endl;

	int n;
	cout<<"Enter a number";
	cin>>n;
	factorial(n);

	cout<< factorial(n) <<endl;
	return 0;
}