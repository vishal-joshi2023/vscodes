#include<bits/stdc++.h>
using namespace std;
class A{
    private :
            static int count;
    public :
          static void staticFun();
          static void staticFun1();        
};

int A :: count=100;

void A :: staticFun()
{
    cout<<"access static member function using objects : "<<count++<<endl;
}

void A :: staticFun1()
{
    cout<<"access static member function without objects : "<<count<<endl;
}

int main()
{
    A obj;
    obj.staticFun();

    A :: staticFun1();
    return 0;
}