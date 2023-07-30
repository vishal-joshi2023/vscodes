#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n=10;
     for (int i = 1; i <= 2*n-1; i++) {
        for (int j = 1; j <= 2*n-1; j++) 
        {
           
             if(j==i || j==(n*2)-i)
            {
              if(i<=n)
               cout<<i;
              else
               cout<<(2*n)-i;  
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}