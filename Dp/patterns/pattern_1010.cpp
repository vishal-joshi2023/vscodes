#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"len : ";

    cin>>n;


   
for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1 && j<=i){
               if(j%2==1)
                    cout<<"1";
               else cout<<"0"; 
            }
            else if(j<=i){
               if(j%2==1)
                   cout<<"0";
               else if(j%2==0) cout<<"1";  
            }
            else
             cout<<"*";

        }
        cout<<endl;
    }
 
  }