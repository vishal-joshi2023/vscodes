#include<iostream>
using namespace std;

class base{

    private : 
          int data;
          //declaration lof friend fun
          friend int friend_fun(base);
    public : 
            //constructor
            base(int val) 
            {
                data = val;
            }     
        
};
//defination of globle friend fun
int friend_fun(base obj){
    return obj.data;
}

//commom friend
class B;
class A{
     int data;
     public :
             A(int a)
             {
                 data = a;
             }

      //mutual friend
      friend void ff(A,B);       
};
class B{
     int data2;
     public :
             B(int b)
             {
                 data2 = b;
             }

      //mutual friend
      friend void ff(A,B);          
};

void ff(A a,B b)
{
    cout<<"Private data of A : "<<a.data<<" and B : "<<b.data2<<endl;
}
int main()
{
    base bs(10);
    cout<<friend_fun(bs)<<endl;

    A a(100);
    B b(200);

    ff(a,b);

    return 0;
}