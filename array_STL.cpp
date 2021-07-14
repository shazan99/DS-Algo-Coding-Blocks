#include <bits/stdc++.h>

using namespace std;

int main() {
    int basic [3] = {1,2,3}; //Normal Cpp ARRAY

    array <int,4> a= {1,2,3,4}; // ARRAY creation in STL

    int size = a.size();
    for(int i=0;i<size;i++)
    {
        cout<< a[i]<<endl;
    }

    cout<<"Size of the array: "<<size<<endl;

    cout<<"Element at 2nd INdex: "<<a.at(2)<<endl;

    if(a.empty()==1)
    {
        cout<<"Empty: True" <<endl;

    }
    else {
        cout<< "Empty : False"<<endl;
    }

    

    cout<< "First Element: "<<a.front()<< endl;

    cout<< "Last Element: "<<a.back()<< endl;

    
}