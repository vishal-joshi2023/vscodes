#include <iostream>
using namespace std;

class Baja{
    public : 
     void makeSound(){  cout<<"Baja is playing.....\n"; }

     virtual void status(){ cout<<"Baja is online.....!\n";}
};

class Pungi : public Baja{
    public : 
     void makeSound(){  cout<<"pungi is playing.....\n"; }
     
     void status(){ cout<<"Pungi is online.....!\n"; }
};

class Dhol : public Baja{
    public :
     //void makeSound(){  cout<<"dhol is playing.....\n"; }
     //void status(){ cout<<"Dhol is online.....!\n"; }
};

int main(){
    
    // Baja baja;
     Pungi pungi;
    // baja.makeSound();
    // pungi.makeSound();

    //with out virtual fun base class fun executs
    Baja *bp = new Pungi();
    bp->makeSound();
    
    Dhol dhol;
    dhol.makeSound(); //exes base bcz deived has no imp of makeSound 

    //virtual fun -> refrence to most(Latest) implemented fun
    Baja *bp1 = &dhol;

    bp1->status();
    bp->status();

    dhol.status();
    pungi.status();


    return 0;
}
