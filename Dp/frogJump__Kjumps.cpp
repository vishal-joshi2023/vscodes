#include<bits/stdc++.h>
using namespace std;

//optimize time and space memoize
int minCostDp(vector<int> &arr, int n,int k,vector<int> &dp){
    for(int j=1;j<=n;j++){

      int preCost = INT_MAX;

      for(int i=1;i<=k;i++){
        if(j-i>=0){
          int currCost = dp[j-i]+abs(arr[j]-arr[j-i]);
          preCost = min(currCost,preCost);
        }
        else 
          break;   
       }

       dp[j] = preCost; 
     }

    return dp[n];
}

//recursive unoptimize TLE sol
int minCost(vector<int> &arr, int ind,int k){
    if(ind==0) return 0;
     
    int preCost = INT_MAX;

    for(int i=1;i<=k;i++){
        if(ind-i>=0){
          int currCost = minCost(arr,ind-i,k)+abs(arr[ind]-arr[ind-i]);
          preCost = min(currCost,preCost);
        }
        else break;   
    } 

    return preCost;
}

int minJumpCost(vector<int> &arr, int n,int k){
    vector<int> dp(n);
    dp[0]=0; 
    //return minCost(arr,n-1,k);
    return minCostDp(arr,n-1,k,dp);
}
int main(){
    vector<int> stones = {2,4,3,6,5,7,6,6,8,9,7,6};
    int n = stones.size();
    int k;
    cout<<"maxJump : ";
    cin>>k;
    cout<< minJumpCost(stones,n,k);
    return 0; 
}