#include<iostream>
using namespace std;
class c
{
    public:
    void fun(){cout<<"default"<<endl;};
    void fun(int i){cout<<"default value "<<i<<endl;}
    void fun(int i,int j){cout<<"default values "<<i<<" "<<j<<endl;}
};
int main()
{
    c obj;
    obj.fun();
    obj.fun(1);
    obj.fun(2,3);
    return 0;
}