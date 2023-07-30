 #include<bits/stdc++.h>
 using namespace std;

class A
{
    private : 
             static int var;
    public  :
             void objProperityFun()
             {
                 cout<<"object is created successfully : "<<endl;
                 var++;
             } 
            int objectsCounts()
             {
                 return var;
             }        
};
int A :: var = 1; //defination of static data menber of class

/*  .............  */

 void chk_static_status()
 {
     static int i=1;
     cout<<"static value : "<<i++<<endl;
 }
 /*  .............  */

 int main()
 {
     static int i;
     cout<<"Default Value Of Static : "<<i<<endl;
     
     //static data member remains unchanged 
     while(++i<4)
     chk_static_status();

     while(i--)
     {
         A obj;
         obj.objProperityFun();
     }
     A obj;
     cout<<"total counts of objects created : "<<obj.objectsCounts()<<endl;
     return 0;
 }