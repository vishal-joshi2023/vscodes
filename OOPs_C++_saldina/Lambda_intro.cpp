#include<bits/stdc++.h>
using namespace std;

/*
  without lambda we have ->
   # Inline fun()
   # reg fun()  
  
   lambda makes code easy and less complex
   syntex -> [CC] (P) {F.D};

   cc -> capture clause  &->for pass by addr(changable) : = pass by val
   p -> parameter
   fd -> fun defination

   lambda has access to all inclosing scope variable in program 
     ->withLambda_2

*/
void withoutLambda(){
    struct 
    {
       void operator() (int x){
        cout<< x <<" ";
       }
    }struct_obj;
    

    vector<int> v={1,2,3,4,5,6,7};

    for_each(v.begin(),v.end(),struct_obj);
}

void withLambda(){
    vector<int> v={1,2,3,4,5,6,7};
    for_each(v.begin(),v.end(),[](int num){cout<<"\n"<<num;});
}

void withLambda_2(){
    
    int a=2;
    int b=3;
    int c=10;

    cout<<"\n"<<"....."<<c<<endl; 
    vector<int> v={1,2,3,4,5,6,7,8,9,10,15};
    
    //cc pass by value immutable
    for_each(v.begin(),v.end(),[=](int x){
        if(x%2==0) cout<<x<<" is div by 2 \n";
        else if(x%3==0) cout<<x<<" is div by 3 \n";
        else  cout<<x<<" is not div by 2 & 3 \n";
        // invalide stst c=3;
        });
    
    //we can change cc value
    for_each(v.begin(),v.end(),[&](int x){
        if(x%2==0) cout<<x<<" is div by 2 \n";
        else if(x%3==0) cout<<x<<" is div by 3 \n";
        else  cout<<x<<" is not div by 2 & 3 \n";

        c=20;
        
        });   

        cout<<"\n"<<"....."<<c<<endl; 
      
        

        //same  but manually
      for_each(v.begin(),v.end(),[a,b,&c](int x){
        if(x%2==0) cout<<x<<" is div by 2 \n";
        else if(x%3==0) cout<<x<<" is div by 3 \n";
        else  cout<<x<<" is not div by 2 & 3 \n";

        c=10;
        
        });   
        cout<<"\n"<<"....."<<c<<endl; 
}

int main()
{
   withoutLambda();
   withLambda();
   cout<<"\n";
   withLambda_2();
}