#include<iostream>
using namespace std;
class Engien
{ //abstract class (interface)
    
    public:
           //pure virual fun
           virtual void makeImplementation() = 0;
};

class Entity :public Engien
{
   //also abstract class bcz not imp. makeImp() 
   public :
           virtual void getImplemented() = 0;

};

class Player : public Entity
{
   public: 
          //implementation
          void makeImplementation()
          {
              cout<<"make Implemented "<<endl;
          }
          void getImplemented()
          {
              cout<<"get Implemented "<<endl;
          }
};

int main()
{
    Engien *engienPtr;
    Entity *entityPtr;
    Player player;

    engienPtr = &player;
    entityPtr = &player;

    engienPtr->makeImplementation();
    
    entityPtr->makeImplementation();
    entityPtr->getImplemented();

    return 0;
}