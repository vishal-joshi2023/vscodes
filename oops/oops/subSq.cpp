#include<bits/stdc++.h>
using namespace std;
vector<string> str;

void subSequence(string str)
{
   if(str.size()==0)
   {
       ::str[0] = "";
        return; 
   }

   subSequence(str.substr(1));
   int n = ::str.length(); 
   for(int i=0;i<n;i++)
   {
       ::str.push_back(str[0]+ ::str[i]);
   }
}
int main()
{
    subSequence("vishal");

    cout<<"["
    for(auto &str: ::str)
    {
        cout<<"'"<<str<<"'"<<","<<endl;
    }
    return 0;
}