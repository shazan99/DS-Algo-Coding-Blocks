#include <iostream>
using namespace std;

int Fact(int n)
{
    if (n==0)
    {
        return 1;
    }

    int prevfact= Fact(n-1);
    return n*prevfact;
}

int main()
{
    int n;
    cin>>n;
    cout<<Fact(n)<<endl;
    return 0;
}