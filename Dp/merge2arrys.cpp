#include <bits/stdc++.h>
using namespace std;
//if 0 as an free space in array
  void fun(vector<int> &v,int val,int index)
    {
        for(int i=size(v)-1;i>index;i--)
            v[i] = v[i-1];
        
        v[index]=val;
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      
        if(m==0 && n==1)
        {
            nums1 = {nums2[0]};
            return;
        }
        if(n==0)
            return;
        
        int i=0,j=0;
        
        //move zeros
        int a=0,b=0;
        while(b<n)
        {
            if(!nums1[a] && !nums1[b])
                b++;
            else
            {
                swap(nums1[a],nums1[b]);
                a++;
                b++;
            }
        }
            
        //cmpring and shifting code
        while(i<size(nums1)&&j<size(nums2))
        {
            if(nums1[i]<nums2[j] && nums1[i]!=0)
            {
                i++;
            }
            else if(nums1[i]>=nums2[j])
            {
                fun(nums1,nums2[j],i);
                j++;
            }
            else if(nums1[i]<nums2[j] && nums1[i]==0)
            {
                nums1[i]=nums2[j];
                i++;
                j++;
            }
        }
        return;
    }
int main()
{
   vector<int> nums1 = {1,2,3,5,7,8,0,0,0,0,0,0,0,0,0,0};
   vector<int> nums2 = {2,3,4,6,8,8,9,10}; 
   
   merge(nums1,10,nums2,8);
   for(int i:nums1)
   cout<<i<<" ";
   cout<<"--"<<size(nums1);
    return 0;
}