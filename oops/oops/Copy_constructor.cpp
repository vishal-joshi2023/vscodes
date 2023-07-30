#include<iostream>
using namespace std;
class Entity
{
   int data;
   public :
          Entity(){}
          Entity(int input)
          {
              data = input; 
          }
          //custom copy const
          Entity(Entity &obj)
          {
              data = obj.data;
          }
          
         int disp()
          {
              return data;
          }
};

int main()
{
    Entity E1(100);
    Entity Ex;
    //default copy const. involked //custom
    Entity E2 = E1; 
    Entity E3(E2);
    Ex = E1; 

    cout<<"E1 data : "<<E1.disp()<<endl;
    cout<<"copy E1 data to E2 usin DefCopyConst : "<<E2.disp()<<endl;
    cout<<"copy E2 data to E2 usin DefCopyConst : "<<E3.disp()<<endl;
    cout<<"Ex data : "<<Ex.disp()<<endl;
    return 0;
}