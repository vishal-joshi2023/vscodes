#include<bits/stdc++.h>
using namespace std;
//print all subset accept it self
int main()
{
    vector<int> arr = {1,2,3};
    int n = arr.size()+1;
    
    // 1<<n == 2 pow n
    for(int i=0;i<pow(2,n)-1;i++)
    { 
        vector<int> v; 
        for(int j=0;j<n;j++) 
        {
            if( i & (1<<j))
              v.push_back(arr[j]) ;
            
        } 
        for(int ele:v)
         cout<<ele<<" ";
        cout<<"\n"; 
    }
    
    return 0;
}