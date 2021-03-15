#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]= {20,30,40,40,40,50,60,100,1100};
    int n = sizeof(arr)/sizeof(int);

    //Search in a sorted array
    int key;
    cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if(present)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent" <<endl;
    }

    //Two additional things are
    //Getting the index of the element
    // lower_bound(start,end,key) and upper_bound(start,end,key)

    auto lb=lower_bound(arr,arr+n,40); //Here this will give the first element which is >=key
    cout<<"Lower Bound of 40 is "<<(lb-arr)<<endl;

    //Upper bound method
    auto ub = upper_bound(arr,arr+n,40); //Here this will give the first element which is strictly >key
    cout<<"Upper bound of 40 is "<<(ub-arr)<<endl;

    //To find the frequency of an element in an array we can do (upper_bound - lower_bound)
    cout<<"Occurence Frequency of 40 is " <<(ub-lb)<<endl;


    return 0;

}