#include<bits/stdc++.h>
using namespace std;


//optimal space comp.
void funOP(int indx,vector<int> &v)
{
    if(indx==v.size()){
        for(int i:v) cout<<i<<" ";
        cout<<endl;
        return;
    }
    for(int i=indx;i<v.size();i++)
    {
        swap(v[i],v[indx]);

        funOP(indx+1,v);

        swap(v[i],v[indx]);
    }
     
}

//Tc - n! * n  
//Sc - n+n ds+dp
void fun(vector<int> &v,vector<int> &dp,vector<int> &t){
    if(t.size()==v.size()){
        for(int i:t) cout<<i<<" ";
        cout<<endl;
        return;
    }
     for(int ind=0;ind<v.size();ind++)
        if(!dp[ind])
     {
           t.push_back(v[ind]);
           dp[ind]=1;

           fun(v,dp,t);
           
           t.pop_back();
           dp[ind]=0;
     }
 }
int main(){
    vector<int> v{1,2,3};
    vector<int> dp(3,0),t;
    fun(v,dp,t);
    cout<<"________"<<endl;
    funOP(0,v);
}