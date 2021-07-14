#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;
    vector <int> a(5,1); //Here is a vector conatining 1 five times

    vector <int> last(a);
    for(auto i:last)
    {
        cout<<i<<" "<<endl;
    }
    cout<< "Capacity: "<<v.capacity()<<endl; //tells us how much space assigned for elements

    v.push_back(1);
    cout<< "Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<< "Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<< "Capacity: "<<v.capacity()<<endl;

    cout<<"Size of Vector: "<<v.size()<<endl; //tells us how many elements currectly present

    cout<<"Element at 2nd Index"<<v.at(2)<<endl;

    cout<<"Front: " <<v.front()<<endl;
    cout<<"Back: "<< v.back()<<endl;

    v.pop_back();
    cout<< "vector after after pop: "<<endl;
    for(auto i:v)
    {
        cout<<i<<" "<<endl;
    }
    
    cout<<"Vector Size before clearing: "<<v.size() <<endl;

    v.clear();

    cout<<"Vector size after clearing: "<<v.size()<<endl;

}