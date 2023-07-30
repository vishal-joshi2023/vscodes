#include<bits/stdc++.h>
using namespace std;

vector<int> v1 = {1,2,3,4,5,6};
vector<int> v2 = {1,2,3,-4,5,6};

int main(){
   
   //1
   cout<< [](int x,int y){return x+y;}(5,10) <<endl;

   //2
   auto sum = [](int x,int y){return x+y;};
   cout<<sum(10,19)<<endl ;

   //all_of ->returns true when all ele satisfied condition else false
   auto cmp = [](int val){ return val>0; };
   cout<<all_of(v1.begin(),v1.end(),cmp)<<endl;

   //any_of -> if one satisfy return true else all false ret. false
   auto cmp2 = [](int val){ return val<0 ;};
   cout<<any_of(v2.begin(),v2.end(),cmp2)<<endl;

   //none_of -> no one match return true
   cout<<none_of(v2.begin(),v2.end(),cmp2)<<endl;
   cout<<none_of(v1.begin(),v1.end(),cmp2)<<endl;
    

}