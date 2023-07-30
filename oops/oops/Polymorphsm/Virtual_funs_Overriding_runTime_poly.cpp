#include<iostream>
using namespace std;

class Entity{
  public:
         void fun_1()
         {cout<<"Entity Class Funtion fun_1 executed "<<endl;}

        //virtual funs
         virtual void fun_2()
         {cout<<"Entity Class Funtion (Virtual) fun_2 executed "<<endl;}

         virtual void fun_3(int val)
         {cout<<"Entity Class Funtion (Virtual) fun_3 executed value: "<<val<<endl;}

};
class Player : public Entity
{
    public:
         void fun_1()
         {cout<<"Player Class Funtion fun_1 executed "<<endl;}

        //virtual funs overriding
         void fun_2()
         {cout<<"Player Class Funtion (overriden) fun_2 executed "<<endl;}

         void fun_3(int val)
         {cout<<"Player Class Funtion (overriden) fun_3 executed value: "<<val<<endl;}

         
         void fun_3()
         {cout<<"Player Class Funtion fun_3 executed No Value : "<<endl;}
         void fun_4()
         {cout<<"Player Class Funtion fun_4 executed"<<endl;}

         //accessing base fun from child
         void fun_1_1()
         {
            cout<<endl<<"From player fun_1_1() to : ";
            Entity :: fun_1();
         }

};
class Fire : public Entity
{
  
};

int main()
{
     Entity *entity_ptr , *entity_ptr1,entity_obj;
     Player *player_ptr , player_obj;

     entity_ptr = &entity_obj;
     entity_ptr1 = &player_obj;

     entity_ptr->fun_1();
     entity_ptr->fun_2();
     entity_ptr->fun_3(10);

     cout<<endl;
   
     entity_ptr1->fun_1();
     entity_ptr1->fun_2();
     entity_ptr1->fun_3(20);
     //entity_ptr1->fun_3();
     //entity_ptr1->fun_4();
     //Exception fun_3 and 4 not exe Error occur becasue we dont define 
     //these as virtaul or normal fun in Entity so cannot access
     //via ptr. only access via objects of player class;
      cout<<endl;
     player_ptr = &player_obj;

     player_ptr->fun_1();
     player_ptr->fun_2();
     player_ptr->fun_3(100);
     player_ptr->fun_3();
     player_ptr->fun_4();

     player_ptr->fun_1_1();
     cout<<endl;
     
     // if drived class not have any fun base class funs will execute 
     Fire fire;
     entity_ptr = &fire;
     entity_ptr->fun_1();
     entity_ptr->fun_2();
     entity_ptr->fun_3(22);

    return 0;
}