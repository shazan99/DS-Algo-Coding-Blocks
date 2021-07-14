#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque <int> d;
    d.push_back(1);
    d.push_front(2);

    for(auto i:d)
    {
        cout<< i<<" ";
    }

   // d.pop_back(); <- to pop element from back 
   // d.pop_front();
    cout<<endl;
    cout<<"Print first index element->" <<d.at(1)<<endl; 
    //Prints element at particular index

    cout<<"Front"<<d.front() <<endl; //front element
    cout<<"Back" <<d.back() <<endl; //back element
    //d.clear();

    cout<<"Empty or not : "<<d.empty() <<endl;

    cout<<"Deque size before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<< "After Erase: "<<d.size()<<endl;

    for(auto i:d)
    {
        cout<<i<<" " <<endl;
    }

}