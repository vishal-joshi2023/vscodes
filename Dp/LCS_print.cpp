#include<bits/stdc++.h>
using namespace std;

// only one sub seq print is allowed using dp grid

string tab(string  str1, string  str2){
   
    int n = str1.length();
    int m = str2.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));

 
    for(int i=0; i<=n; i++) dp[i][0] = 0;
    for(int j=0; j<=m; j++) dp[0][j] = 0;
       
    for(int i=1; i<n+1; i++){
      for(int j=1; j<m+1; j++){
        
         if(str1[i-1] == str2[j-1]) 
           dp[i][j] = 1 + dp[i-1][j-1];
         else
           dp[i][j] =  max(dp[i-1][j] , dp[i][j-1]);  
        }
      }
     
     //printing logic
     string s;
     int len = dp[n][m];

     for(int i=0; i<len; i++)
       s += '0';

     int i=n,j=m ;
     while(i>0 && j>0){  
       
       if(str1[i-1] == str2[j-1])
       {
        s[len-1] = str1[i-1];
        len--;
        i-- , j--;
       }
       else if(dp[i-1][j]>dp[i][j-1])
        i--;
       else j--;  
       
     }

     cout<<dp[n][m]<<"  "<<s.length()<<endl;
     return s;
}
int main()
{
    cout<<tab("mlkcmccndfnjvndfvdsaubdvkdmfvmfld","kcdmkmccsdbhjbjscsdcbdscjbnvdfv");
    return 0;
}