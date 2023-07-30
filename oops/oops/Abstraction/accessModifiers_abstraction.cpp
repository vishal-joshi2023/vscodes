#include<iostream>
using namespace std;

class DataBank{
  //data and pass is abstract from user only access through class member fun  
  private:  
    int data;
    string defaultPass = "1234567";
    string password = "1234567";

  public:
      
     DataBank() :data(0),password(defaultPass) { }
     
     //interface to outside-World 
     void setData(int data)
     { 
        if(this->password == defaultPass)
           this->data = data; 
        else{
            string pass;
            cout<<"Enter Password : ";
            cin>>pass;

            if(this->password == pass) 
               this->data = data;
            else{
               cout<<"**** INVALID PASSWORD ****"<<endl;
               cout<<"DATA WAS NOT UPDATAED"<<endl;
            } 
        }      
     } 

     void setPass(string password){ this->password = password; } 

     void ShowData(string password)
     {
         if(this->password == password)
          cout<<"ACCESS GRANTED DATA : "<<this->data<<endl;
         else
          cout<<"**** INVALID PASSWORD ****"<<endl; 
     }
};
int main()
{
    DataBank person1;
    
    person1.setData(1001);
    person1.setPass("#vishaljoshi1998");

    person1.ShowData("bsdjfbsgfuv");
    person1.ShowData("#vishaljoshi1998");
    person1.setData(1001);

    return 0;
}