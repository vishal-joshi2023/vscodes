#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

void rev(int i,int arr[], int n)
{
    if(i >= n/2) return;  
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr,n);
}
bool Pal(string &s,int i,int n)
{
    if(i >= n/2) return true;
    if(s[i]!=s[n-i-1]) return false;

    return  Pal(s,i+1,n) ;
}

int main()
{
  int n;
  string str = "lollol";
 
 /* 
   cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
     cin>>arr[i];
  cout<<endl;
  rev(0,arr,n); 
  for(int i=0;i<n;i++)
     cout<<arr[i];
     */

   if(Pal(str,0,str.length())) cout<<"ok";
   else cout<<"not ok"; 
}