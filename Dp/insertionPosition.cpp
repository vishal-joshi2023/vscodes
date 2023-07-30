#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int t) 
       
{
    int l=0,h=nums.size();
    if(h==1)
    {
    	return (nums[0]<t)?1:0;
    }

    while(l<h)
    {
       int mid = l+(h-l)/2;
       (nums[mid]>=t)?h=mid:
       	 l=mid+1;

    }
	return l;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,val;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		cin>>val;
		cout<<searchInsert(v,val)<<endl;
	}
}