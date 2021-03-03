#include<bits/stdc++.h>
using namespace std;

void pair_sum(int n,int a[1000],int target)
{
	sort(a,a+n);
	int left=0;
	int right=n-1;
	for(left=0;left<right;)
	{
		if(a[left] + a[right]== target)
		{
			cout<<a[left]<<" and "<<a[right]<<"\n";//added \n
			left++;
		}else if(a[left] + a[right]> target){//added
			right--;
		}else{ //added
			left++;
		}

}
}
int main() {
	int n,target,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>target;
	pair_sum(n,a,target);
	return 0;
}