#include<bits/stdc++.h>
using namespace std;

void threeSum(vector<int>& arr) {

   
   
    vector<vector<int>> ans;
    int n = arr.size();

    //optimal 
    sort(arr.begin(),arr.end());

    for(int i=0;i<n-2;i++){
      if(i!=0 && arr[i-1]==arr[i]) continue;
        int j=i+1;
        int k=arr.size()-1;

        while(j<k){

          int target = arr[i]+arr[j]+arr[k];

          if(target==0){
             vector<int> v = {arr[i],arr[j],arr[k]} ;
             cout<<target;
             ans.push_back(v);
             
             if(j+1<n)
             while(arr[j]==arr[j+1]) j++;
             while(arr[k]==arr[k-1]) k--;

             j++;
             k--;
          }
          else if(target<0){
             j++;
          }
          else{
             k--;
          }
        }
     } 
     //return ans;
   
   
    }

    int main()
{
    vector<int> arr = {-1,0,1,2,-1,-4};
    threeSum(arr);
}