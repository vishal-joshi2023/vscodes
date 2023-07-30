#include<iostream>
using namespace std;

class Entity
{
   public:
           int a;
      Entity(){a=1000;};
      Entity(int val){a=val;};
};

int main()
{
    int *valPtr = new int(50);
    int *arr = new int[3];

    cout<<"value at int valPtr : "<<*valPtr<<endl;

    *valPtr = 100;
    arr[0] = 1;
    *(arr+1) = 2;
    *(arr+2) = 3;

    cout<<"value at int valPtr : "<<*valPtr<<endl;
    cout<<"value int arr at index 0 : "<<arr[0]<<endl;
    cout<<"value int arr at index 1 : "<<arr[1]<<endl;
    cout<<"value int arr at index 2 : "<<arr[2]<<endl;

    Entity *obj = new Entity();
    Entity *obj1 = new Entity(2000);

    cout<<"obj value : "<<obj->a<<endl;
    cout<<"obj1 value : "<<obj1->a<<endl;


    delete valPtr;
    delete[] arr;
    delete obj;
    delete obj1;
    
    cout<<endl<<"after delete"<<endl;
    cout<<"value at int valPtr : "<<*valPtr<<endl;
    cout<<"value int arr at index 0 : "<<arr[0]<<endl;
    cout<<"value int arr at index 1 : "<<arr[1]<<endl;
    cout<<"value int arr at index 2 : "<<arr[2]<<endl;
    cout<<"obj value : "<<obj->a<<endl;
    cout<<"obj1 value : "<<obj1->a<<endl;

    return 0;
}