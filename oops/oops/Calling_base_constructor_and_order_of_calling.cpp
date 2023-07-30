#include<iostream>

using namespace std;
// no of const calls depends on no of objects
class Entity
{
    int data;
    public:
          Entity(int i)
          {
              data = i;
              disp();
          }
    private : void disp()
    {
        cout<<"executed Entity class data is : "<<data<<endl;
    }
};
class Entity2
{
     int data;
     public: 
     Entity2(int i)
     {
         data = i;
         disp();
     }
    private : void disp()
    {
        cout<<"executed Entity2 class data is : "<<data<<endl;
    }
};

//the order of exe is 1st Entity 2nd Entity2 bcz no virtual class
class player : public Entity,public Entity2
{
     int pdata;
     public :                            //passing data in base const
            player(int pd,int data1,int data2) : Entity(data1) , Entity2(data2)
            {
               pdata = pd;
               disp();
     }
    private : void disp()
    {
        cout<<"executed Drived class data is : "<<pdata<<endl;
        cout<<endl;
    }
};

class playerX : public Entity,virtual public Entity2
{
    int pXdata;
     public :                            //passing data in base const
            playerX(int pd,int data1,int data2) : Entity(data1) , Entity2(data2)
            {
               pXdata = pd;
               disp();
     }
    private : void disp()
    {
        cout<<"executed Drived2 class data is : "<<pXdata<<endl;
    }
};

int main()
{
    player p1(10,30,20);

    // using virtual keyword
    playerX p2(10,30,20);
    return 0;
}