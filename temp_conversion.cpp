#include <iostream>
using namespace std;
int main() {
    int f;
    int c;
    for (f=0;f<=300;f=f+20)
    {
        c=(5*(f-32))/9;
        cout<<f<<"  "<<c<<endl;
    }
    return 0;
}