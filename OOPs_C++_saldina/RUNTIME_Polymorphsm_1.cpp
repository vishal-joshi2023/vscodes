#include <iostream>
using namespace std;
//fun overrriding - non vertual
  
class Parent {
public:
    void GeeksforGeeks_Print()
    {
        cout << "Base Function" << endl;
    }
};
  
class Child : public Parent {
public:
    void GeeksforGeeks_Print()
    {
        cout << "Derived Function" << endl;
  
        // call of overridden function
        Parent::GeeksforGeeks_Print();
    }
};
  
int main()
{
    Child Child_Derived;
    //1st drived class then bass class method runs
    Child_Derived.GeeksforGeeks_Print();

     // call function of Base class using ptr
    Parent* ptr = &Child_Derived;
    ptr->GeeksforGeeks_Print();

    //access base 
    Child_Derived.Parent::GeeksforGeeks_Print();
    return 0;
}