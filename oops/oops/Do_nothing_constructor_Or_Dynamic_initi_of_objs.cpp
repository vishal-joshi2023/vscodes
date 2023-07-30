#include<bits/stdc++.h>
using namespace std;

class sum{
    int x,y;
    double f1,f2;
    double add1;
    public:
          //if we dont initilize doNothng cnst than we have to do that in main down below
         // sum(){} 
          sum(int,int);
          sum(int,double);
          sum(double,int);
          sum(double,double);
          void disp()
          {
               cout<<add1<<endl;
          }
};
sum :: sum(int a,int b)
{
    x = a;
    y = b;
    add1= x+y;
}
sum :: sum(int a,double b)
{
    x = a;
    f2 = b;
   add1 = x+f2;
}
sum :: sum(double a,int b)
{
    f1 = a;
    y = b;
   add1 = f1+y;
}
sum :: sum(double a,double b)
{
    f1 = a;
    f2 = b;
   add1 = f1+f2;
}
///////
int main()
{
    
    //sum s1,s2,s3,s4;
    //s1 = sum(2,4);

 //doNothing not intilizaing than do that
   sum s1(2,4); //implicit calls
   sum s2(2,4.0);
   sum s3 = sum(2.0,4);  //explicit calls
   sum s4 = sum(2.0,4.0);

    s1.disp();
    s2.disp();
    s3.disp();
    s4.disp();
    
    return 0;
}