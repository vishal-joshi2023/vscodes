#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class Base1{
    public : void aSimpleMethod() { cout<<"Base1 class method : "<<endl;}
    public : void FuncX() { cout<<"Base1 class Funcx() invoked by drived : "<<endl;}
};

class Base2{
    public : void aSimpleMethod() { cout<<"Base2 class method : "<<endl;}

    public : void FuncX() { cout<<"Base2 class Funcx() invoked by drived : "<<endl;}
} ;

class drived : public Base1, public Base2
{
   //so here drived class overriding aSimplemethod method by its own so it ok 
   public : void aSimpleMethod()
   {
       cout<<"drived class method : "<<endl;
   }

   //Now if we dont define/override a ambigious method then do that
   public : void FuncX()
   {
        Base2 :: FuncX();
   }
};

int main()
{
    drived d1,d2;
    
    d1.aSimpleMethod();

    d2.FuncX();
    
    return 0;
}