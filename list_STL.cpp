#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <int> l;

    list<int> n(5,100);
    for(auto i:n)
    {
        cout<<i<<" ";
    }
    l.push_back(1);
    l.push_front(2);
    cout<<endl;

    for(auto i:l)
    {
        cout<<i<<" "<<endl;
    }

    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(auto i:l) {
        cout<<i<<" "<<endl;
    }
    cout<<"Size of list:"<<l.size()<<endl;
}