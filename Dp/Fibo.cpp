#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int dp[N];

int DP_Bottom(int num) //tabulation
{
   dp[0] = 0;
   dp[1] = 1;
   
   for(int i=2;i<=num;i++)
       dp[i] = dp[i-1]+dp[i-2];

       return dp[num]; 
}

int DP_top(int num)  //memoise
{
  if(num<=1) return num;
 
  if(dp[num] != -1) 
     return dp[num];

  return dp[num] = DP_top(num-1) + DP_top(num-2);
}

int recursion(int num)
{
  //2^n
  if(num<=1) return num;
  return recursion(num-1) + recursion(num-2);
}

int main()
{
    int num;
    cout<<"Nth No:";
    cin>>num;

    // brute force 2^n 
    cout<<recursion(num)<<endl;
    
    // DP Top Down
    memset(dp , -1 ,sizeof(dp));
    cout<<DP_top(num)<<endl;
   
    // DP Bottom Up
    memset(dp , -1 ,sizeof(dp));
    cout<<DP_Bottom(num)<<endl;

}
