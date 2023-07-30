#include<iostream>
using namespace std;

class Entity
{
   int data = 0;
   int data1;
   int data2;
   public :
        /* also do this 
           *Entity(int data1,int data2) : data1(data1),data2(data2)
           *Implicit this calling 
              Entity(int i,int j) 
                { data1 = i; data2 = j;}
        */

        //Explicit this pointer calling
        Entity(int data1,int data2)
        {
           this->data1 = data1;
          (*this).data2 = data2;  //also
        }
        
        //return obj ref. using this for fun chaining like java
        // systex class & fun/const {return *this} ->simple
        Entity& set(int data)
        {
           this->data = data;

           return *this;
        }

        Entity& disp()
        {
            cout<<data1<<endl<<data2<<endl;
            return *this;
        }
        
        void dispAll()
        {
            cout<<data1<<endl<<data2<<endl<<data<<endl;
        }

};

int main()
{
    Entity E(10,20);

    //fun chaninng using this llike java
    E.set(100).disp().dispAll();
    
    return 0;
}