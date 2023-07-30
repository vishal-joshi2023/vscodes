#include<bits/stdc++.h>
using namespace std;

//Friend class demo
class A{
    int a;
    public:
           A(int i)
           {
               a=i;
           }
           //class B is friend of A
          friend class B;
};
class B{
    public : void squar(A obj)
    {
        cout<<obj.a*obj.a<<endl;
    }
};

//gave permission individually to functions
class X;

class Y{
      public :
         //class X is not define yet so only declare fun take address of objs & must
         void friend_fun(X &);
         void friend_fun2(X &);
};

class X{
      int data;
      public:
             X(int val)
             {
                 data = val;
             }
             //declaring other class member fun as friend of this class
             friend void Y :: friend_fun(X&);
             friend void Y :: friend_fun2(X&);
};
//defining
void Y :: friend_fun(X &x)
{
    cout<<"Data : "<<x.data<<endl;
}
void Y :: friend_fun2(X &x)
{
    cout<<"Data * Data : "<<x.data*x.data<<endl;
}
int main()
{
    A obj(4);
    B obj2;
    obj2.squar(obj);

     //
     X x(10);
     Y y; 
     y.friend_fun(x);
     y.friend_fun2(x);
     
    return 0;
}