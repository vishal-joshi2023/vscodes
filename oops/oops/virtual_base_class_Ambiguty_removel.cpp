#include<iostream>

using namespace std;
class A{
    public:
     void greet()
     {
         cout<<"hello A";
     }
};

class B : public virtual A{
    //only 1 copy of greet shared
};
class C : public virtual A{
    //only 1 copy of greet shared
};

class D : public B,public C{
  //one copy access no ambiguty
};
int main()
{
    D obj;
    obj.greet();
    return 0;
}