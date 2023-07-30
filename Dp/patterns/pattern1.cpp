#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,w,x;
    cout<<"len : ";
    cin>>len;

    w=len;

    while(len--)
    {
        for(int i=1;i<=w;i++)
        {
          x=w;
          while(x--)
          {
            for(int j=1;j<=w;j++)
            {
                if(j==i) cout<<"*";
                else cout<<"  ";
            }
          }
          cout<<endl;
          }  
        }
    }

