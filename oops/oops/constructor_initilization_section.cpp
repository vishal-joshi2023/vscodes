#include<iostream>
using namespace std;

class A
{
   int a,b;

   public :           //initilization section
       A(int i,int j) : a(j), b(i)
       {
           cout<<"a : "<<a<<endl<<"b : "<<b<<endl; 
       }
       A(int i,int j,int k) : a(i*2) ,b(j+k)
       {
           cout<<"a = i : "<<a<<endl<<"b = j*k : "<<b<<endl; 
       }
};

int main()
{
    A o1(4,6);
    A o2(4,2,8);

    return 0;
}