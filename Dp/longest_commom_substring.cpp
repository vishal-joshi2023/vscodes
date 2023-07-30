#include<bits/stdc++.h>
using namespace std;
string tab(string  str1, string  str2){
   
    int n = str1.length();
    int m = str2.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));

    for(int i=0; i<=n; i++) dp[i][0] = 0;
    for(int j=0; j<=m; j++) dp[0][j] = 0;

    int maxi=0;
    int x,y;   
    for(int i=1; i<n+1; i++){
      for(int j=1; j<m+1; j++){
    
         if(str1[i-1] == str2[j-1])  
         {
           dp[i][j] = 1 + dp[i-1][j-1];
           if(maxi<dp[i][j]) 
           { x=i; y=j; maxi=dp[i][j]; }
         }
         else  dp[i][j] =  0;  
      
      }
    }
    
    string s = "";
    int len = maxi;

    for(int i=0; i<len; i++)
       s += '0';

    while(dp[x][y]!=0)
    {
      s[len-1]=str1[x-1];
      x--,y--,len--;
    }
    cout<<"LC substring is : "<<s<<" : "<<maxi<<endl; 
    
    return s;

}
int main()
{
  cout<<tab("asdfghjkl","asdfghjkl");
  return 0;
}