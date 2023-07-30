#include<iostream>
#include<string.h>
using namespace std;
//private same because we use fun to retrive data and set data
class Entity
{
    int id;
    string name;
    string type;
    public:
           void baseSet(int ID,string Name,string Type)
           {
               id = ID;
               name = Name;
               type = Type;
           }
           int baseID();
           string baseType();
           string baseName();
           
};
int Entity :: baseID()
{
    return id;
}
string Entity :: baseName()
{
    return name;
}
string Entity :: baseType()
{
    return type;
}
/*..........*/
class Player : private Entity
{
    int score;
    public:
           void setData(int,string,string,int);
           void getData();
};
void Player :: setData(int id,string name,string type,int sc)
{
    score = sc;
    baseSet(id,name,type);
}
void Player :: getData()
{
    cout<<"Player Name : "<<baseName()<<endl<<"ID : "<<baseID()<<endl<<"Type : "<<baseType()<<endl<<"Score : "<<score;
}
/*..........*/
int main()
{
    Player P1;
    P1.setData(1,"vishal","FPP/FPP",70);
    P1.getData();
    return 0;
}

