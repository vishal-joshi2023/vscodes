#include<iostream>
using namespace std;


class Entity
{
   int x;
   public:
         Entity(int x)
         {
             this->x = x;
             disp(this);
         }
         void disp(Entity *E);
         
         void print(){cout<<x<<endl;}
};

void Entity::disp(Entity *E)
{
   E->print();
}

int main()
{
    Entity E(10);
    
    return 0;
}