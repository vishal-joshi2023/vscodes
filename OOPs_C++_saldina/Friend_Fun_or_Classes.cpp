#include<iostream>
using namespace std;

class base{

  private:
    int num;
    int sqr;
    int cube;
    
  public:
    void set_num(int x){ num = x; sqr = x*x ; cube = sqr*x;}

    //this friend fun is globle fun
    //chose friend wisely 
    //many friends break the concept of Encapsulation
    //friendship is not mutual

    friend void getinfo(base);  

    friend class f_class;   
};
 
void getinfo(base obj){
        cout<<"num : "<<obj.num<<"\n";
        cout<<"squre : "<<obj.sqr<<"\n";
        cout<<"cube : "<<obj.cube<<"\n";
}   

class f_class{
    public:
    void getinfo_Private_Fun(base obj){
        cout<<"num : "<<obj.num<<"\n";
        cout<<"squre : "<<obj.sqr<<"\n";
        cout<<"cube : "<<obj.cube<<"\n";
}   
        
};
int main(){
   base b;
   b.set_num(10);
   
   getinfo(b);

   f_class fobj;
   fobj.getinfo_Private_Fun(b);
}