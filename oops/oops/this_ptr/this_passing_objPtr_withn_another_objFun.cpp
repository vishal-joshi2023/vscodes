#include<iostream>
using namespace std;

class Compair
{
   int area;
   int len,wid;

   public: 
          Compair(int len,int wid)
          {
              this->len = len;
              this->wid = wid;
               area = len*wid;
          }
          bool compair(Compair *obj)
          {
              return (this->area > obj->area);
          }
          int Area()
          {
              return area;
          }
};

int main()
{
    Compair *a = new Compair(21,4);
    Compair *b = new Compair(4,4);

    if(a->compair(b))
       cout<<"area of a is bigger ie : "<<a->Area();
    else
       cout<<"area of b is bigger ie : "<<b->Area();

    return 0;
}