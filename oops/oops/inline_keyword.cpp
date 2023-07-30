#include<bits/stdc++.h>

using namespace std;

class INLINE
{
  private:
         int a,b;
  public:
         void getter(int i,int j);
         void sum();
         void multi();       
};
//defination using inline
inline void INLINE :: getter(int i,int j)
{
    a=i;
    b=i;
    cout<<a<<"  "<<b<<endl;
}
inline void INLINE :: sum()
{
    cout<<"sum = "<<a+b<<endl;
}
inline void INLINE :: multi()
{
    cout<<"multiplication = "<<a*b<<endl;
}

//fun only
inline int simpleFun(int i,int j)
{
    return i+j;
}

int main()
{
    //simple fun call using inline
    cout<<"Just inline : "<<simpleFun(2,10)<<endl;
    
    INLINE demo;
    demo.getter(10,20);
    demo.sum();
    demo.multi();

    return 0;
}