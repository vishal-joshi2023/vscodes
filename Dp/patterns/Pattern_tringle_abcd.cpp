#include<bits/stdc++.h>
using namespace std;

int main()
{
    
int n;
cin>>n;

int l=n-1,r=n-1;

   for(int i=0;i<n;i++){
      char ch ='A';
      for(int j = 0; j <2*n-1; j++) {
        if(j>=l && j<=r && j<n) 
         cout<<ch++;
        else if(j>=l && j<=r &&j==n)
         cout<<--(--ch);
        else if(j>=l && j<=r && j>n) 
         cout<<--ch;
        else 
         cout<<" ";
    
      }

      l--;
      r++; 
      cout<<endl; 
   }
}