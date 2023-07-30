#include<bits/stdc++.h>
using namespace std;


//compile time fun_overloading
void output()
{ 
    cout<<"Nothing Is Passed : "<<endl;
}
void output(int a)
{
    cout<<"Integer a "<<a<<" Is Passed : "<<endl;
}
void output(string str)
{
    cout<<"String str "<<str<<" Is Passed : "<<endl;
}

//runtime fun_overriding
class BASE{
public:
       void funC()
       {
           cout<<"base class function "<<endl;
       }
       void funP()
       {
           cout<<"base class function but access via drived obj : "<<endl;
       }
};
class DREVED:public BASE{
 public:
       void funC()
        {
            cout<<"drived class funcion"<<endl;
        }   
};

//access overridion fun
class Parent
{
 public:
       void fun()
       {
           cout<<"Parent function "<<endl;
       } 
};
class child:public Parent
{
  public:
        void fun()
        {
            cout<<"child function "<<endl;

            cout<<"1 method to access parent fun : Parent :: fun(); "<<endl;
            Parent :: fun();
        }
};

//IMP
class SocialMedia
{
 public:
       void funX()
       {
           cout<<"SocialMedia function "<<endl;
       } 
  virtual void X() = 0;     
};
class Insta:public SocialMedia
{
  public:
        void funX()
        {
            cout<<"insta function "<<endl;
        }

   //important
   private: 
        void X()
        {
           cout<<"*** Ops security breached ***"<<endl;
        }      
};

int main()
{
    output();
    output(10);
    output("asdffg");

    //overriding
    DREVED b;
    b.funC(); //imp
    b.funP();

    //access Parent class overriddin fun 

    child c;
    c.fun();
    cout<<"2 method to access parent function : c.Parent :: fun(); "<<endl;
    c.Parent :: fun();  //imp

   
    //using ptr;
    Insta ig;
    ig.funX();

    cout<<"Access overridin Fun using Ptr : "<<endl;
    SocialMedia *sm = &ig; //imp
    sm->funX();

    cout<<"Access private fun of Insta : "<<endl;
    Insta ig2;
    SocialMedia *S  = &ig2;
    S->X();

    return 0;
}