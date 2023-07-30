#include <iostream>
using namespace std;
// static ko chahe kebhi change kro vo sbhi
// ke liye static hoga other classs hogi 
class Base {
public:
    static int count;
    void fun(){
        cout<<"BASE...";
    }
};

int Base::count = 0;

//single copy of fun()
class Derived1 :virtual public Base {
public:
    void incCount() { count++; }
    
};
//single copy of fun()
class Derived2 : virtual public Base {
public:
    void incCount() { count++; }
};

//single copy of fun()
class Derived3: public Derived1,public Derived2 {
public:
    void incCount() { count++; }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;
    Derived3 obj3;

    obj1.incCount();  // increments count through obj1
    obj2.incCount();  // increments count through obj2
    obj3.incCount();  // increments count through obj2

    cout << obj1.count << endl; // prints 1
    cout << obj2.count << endl;  // prints 1
    cout << obj3.count << endl;  // prints 1
    obj3.fun(); //withou virtual gives error
    
    return 0;
}