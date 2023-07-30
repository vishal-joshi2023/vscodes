#include<iostream>
using namespace std;

class Entity{
   public:
         Entity(){cout<<"invoking base const default"<<endl;}
};
class drived : public Entity
{
    public:
          drived(){cout<<"invoking drived const default"<<endl;}
};

int main()
{  
    
    drived d;
    return 0;
}