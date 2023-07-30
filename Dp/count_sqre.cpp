#include<bits/stdc++.h>
using namespace std;


int main()
{
    
   int n=4;
   /*
    1 1 1 1
    1 2 3 4
    1 3 4 4
    1 4 5 5
   
   */  

  cout<<(n * (n + 1) * (2*n + 1)) / 6<<endl;
  
  int ans=0;
  ans = n+n-1;

  vector<vector<int>> v(4,vector<int>(4,1));
  for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        v[i][j] += min(v[i-1][j],min(v[i][j-1],v[i-1][j-1]));
        ans+=v[i][j];
    }
  }
  cout<<ans;
}