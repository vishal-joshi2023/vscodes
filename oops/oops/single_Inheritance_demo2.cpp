#include<bits/stdc++.h>

using namespace std;

class employee{
  private: 
          string pno;
          string name;
          double salary;
          string dpmt;

  public :
         //setters(constructors)
         employee();
         employee(string p,string depart,string n,double sal)
         {
             pno = p;
             salary = sal;
             name = n;
              dpmt = depart;
         }
         


         //methods
         void ePhone()
         {
             cout<<"Phone Number Of Employee  "<<name<<" is : "<<pno<<endl;
         }
         void eName()
         {
             cout<<"Name Of Employee is : "<<name<<endl;
         } 
         void eSalary()
         {
             cout<<"Salary Of Employee "<<name<<" is : "<<salary<<endl;
         } 
         void eDepartment()
         {
             cout<<"Department Of Employee "<<name<<" is : "<<dpmt<<endl;
         }

     
         void allDetails()
         {
            eName();
            ePhone();
            eDepartment();
            eSalary();
         }   
};
class developer:public employee{
    private :
             string lang;
             int exp;
    public:
             developer();
             developer(int e,string l ,string depart,string name,string phone,double sal) : 
             employee(phone,depart,name,sal)
             {
                 exp = e;
                 lang = l;
             }
    void Details()
    {
       allDetails();
       cout<<"Language Of Employee is : "<<lang<<endl;
       cout<<"Years Of Exprience Of Employee is : "<<exp<<endl;
    }

};
int main()
{
    developer d1(0,"c++","Tranie","vishal","8290238052",15000);
    d1.Details();
    return 0;
}