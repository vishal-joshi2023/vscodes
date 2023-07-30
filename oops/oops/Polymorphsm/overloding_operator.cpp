#include<iostream>
using namespace std;

class addComp
{
   int real;
   int img;

   public: 
          addComp(int real=0,int img=0) {
              this->real = real;
              this->img = img;
          }

          addComp operator + (addComp &c2)
          {
              addComp c3;
                       //c1 
              c3.real = real + c2.real;
              c3.img  = img  + c2.img;

              return c3;
          }
          addComp operator - (addComp &c2)
          {
              addComp c3;
                       //c1 
              c3.real = real - c2.real;
              c3.img  = img  - c2.img;

              return c3;
          }
          addComp operator * (addComp &c2)
          {
              addComp c3;
                       //c1 
              c3.real = real * c2.real;
              c3.img  = img  * c2.img;

              return c3;
          }

          addComp operator + (int num)
          {
              real = real+num;
              return (*this);
          }
           addComp operator - (int num)
          {
              real = real-num;
              return (*this);
          }
           addComp operator * (int num)
          {
              real = real*num;
              return (*this);
          }

          void disp()
          {
              cout<<real<<" + "<<img<<endl;
          }
};
int main()
{
    addComp c1(2,4);
    addComp c2(6,10);
    addComp c3 = c1*c2;
    addComp c4 = c2 + 4;
    
    c3.disp();
    c4.disp();

    return 0;
}