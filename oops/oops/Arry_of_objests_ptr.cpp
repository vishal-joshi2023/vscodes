#include<bits/stdc++.h>
using namespace std;

class shop
{
  string product;
  int quantity;
  int price;

  public:
         shop(){};
         void shopItems(string name,int qty,int cost)
         {
             product = name;
             quantity = qty;
             price = cost;
         }
         void disp()
         {
             cout<<endl;
             cout<<"Product Name : "<<product<<endl;
             cout<<"Product Quantity : "<<quantity<<endl;
             cout<<"Total Price : "<<quantity*price<<endl;
             cout<<endl;
         }

};
int main()
{
    //creating list of obj ptrs
    //just like linked list
    int count;
    cout<<"Enter total no of objects : ";
     cin>>count;

    shop *objs = new shop [count];
    shop *H_ptr = objs;

    string name;
    int p,q;
    int n = count;

    while(count--)
    {
       cout<<"Enter Name : Price : Quantity "<<endl;
       cin>>name>>p>>q;

       H_ptr->shopItems(name,q,p);
       H_ptr++; //increment to next  
    }

   while(n--)
   {
       objs->disp();
       objs++;
   }
    return 0;
}