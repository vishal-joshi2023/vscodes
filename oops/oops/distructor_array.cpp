 #include<iostream>
 using namespace std;
 
 class A{
     public:
      A(){cout<<"const"<<endl;}
      ~A(){cout<<"destr"<<endl;}
 };
 int main()
 {
     A *a = new A[5];
     delete[] a;

     return 0;
 }