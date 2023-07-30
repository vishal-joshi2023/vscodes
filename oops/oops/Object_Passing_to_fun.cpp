#include<bits/stdc++.h>
using namespace std;

class Parent
{
   int x,y;

   public: 
          void setter(int,int);
          void setter4C(Parent,Parent);
          Parent getter(Parent,Parent);
          void disp()
          {
              cout<<"value of x and y "<<x<<" : "<<y<<endl;
          }
       };
void Parent :: setter(int a,int b)
{
   x = a;
   y = b;
}
//passing obj and calcu. C's value
void Parent :: setter4C(Parent p1,Parent p2)
{
    x = p1.x + p2.x;
    y = p1.y + p2.y;
}
//return obj
Parent Parent :: getter(Parent obj1, Parent obj2)
{
    //create new obj 
    Parent p;
    p.x = obj1.x+obj2.x;
    p.y = obj1.y+obj2.y;

    return p;
}

int main()
{
    Parent A,B,C;

    A.setter(2,10);
    B.setter(4,20);
    //pasing obj
    C.setter4C(A,B);

    A.disp();
    B.disp();
    C.disp();

    //return obj
    Parent d;
    d = d.getter(A,B);
    d.disp();

    return 0;
}