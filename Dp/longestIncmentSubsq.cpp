#include <bits/stdc++.h>
using namespace std;

// Driver Code
int size(vector<int>& nums)
{
	int i=0;
	for(int I:nums)
		i++;
	return i;
}
int lengthOfLIS(vector<int>& nums) {
        
        vector<int>dp(size(nums),1);
        
        
        for(int i=1;i<size(nums);i++)
            for(int j=0;j<i;j++)
                if(nums[i]>nums[j])
                    dp[i]=max(dp[i],dp[j]+1);
        
        return *max_element(begin(dp),end(dp));
    }
int main()
{
   
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++)
       cin>>v[i];

   cout<<lengthOfLIS(v)<<endl;

	return 0;
}
