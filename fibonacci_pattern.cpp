#include <iostream>
using namespace std;

int fibonaci(int n) {
  
   int a=0;
   int b=1,c;

   for(int i=1;i<=n-1;i++) {
   	c=a+b;
   	a=b;
   	b=c;
   }
   return c;

}

int main() {
	int n;
	cin>>n;
	cout<<fibonaci(n)<<endl;


	return 0;
}