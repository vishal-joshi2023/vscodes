#include<iostream>
#include<math.h>
using namespace std;
int absqr(int a,int b)
{
    return (a*a)+(b*b) + 2*(a*b);
}

int main()
{
    //cout is predefined and we use only its application
    cout<<"hello"<<endl;
    
    //pow() fun is declared(in math.h) and defiend we just use this 
    //so all the complexity is hidden from user
    int x = pow(2,4);
    cout<<x<<endl;
     //abstraction using custom fun
    cout<<absqr(10,10);
    return 0;
}