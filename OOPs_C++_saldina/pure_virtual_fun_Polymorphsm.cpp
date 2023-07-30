#include <iostream>
using namespace std;

class Baja{
    public : 
     void makeSound(){  cout<<"Baja is playing.....\n"; }
     virtual void status(){ cout<<"Baja is online.....!\n";}

     //pure virtual -> declaration must mendatory to imp. by childs
     virtual void soundType() = 0;

};

class Pungi : public Baja{
    public : 
    //not exe using ptr
     void makeSound(){  cout<<"pungi is playing.....\n"; }

     void status(){ cout<<"Pungi is online.....!\n"; }
     void soundType(){ cout<<"Pungi is sharp.....!!\n";}
};

class Dhol : public Baja{
    public :
    //not exe using ptr
     void makeSound(){  cout<<"dhol is playing.....\n"; }

     void status(){ cout<<"Dhol is online.....!\n"; }
     void soundType(){ cout<<"Dhol is basses.....!!\n";}
};

int main(){
    
    Baja *b1,*b2;

    b1 = new Pungi();
    b2 = new Dhol();

    b1->makeSound();
    b2->makeSound();

    b1->status();
    b1->soundType();
    
    b2->status();
    b2->soundType();


    return 0;
}
