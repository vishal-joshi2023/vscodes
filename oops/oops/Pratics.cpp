 #include<iostream>
 using namespace std;
 int value = 1;
 
 class A{
     public:
       A(){cout<<"const"<<endl;}
      ~A(){cout<<"destr"<<endl;}
 };
 int main()
 {

     A *a = new A[2];
     delete[] a;

     int arr[] = {1,2,3,4,5};
     //accessing arry
     for(int i=0;i<5;i++)
        cout<<i[arr]<<-i[arr]<<endl;
 
   
     return 0;
 }