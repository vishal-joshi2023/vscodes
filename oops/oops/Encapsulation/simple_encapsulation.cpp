//Encapsulation is simple wrapping up specific data with approprite methods
//together so these data is unaccessable to other obj or we can allow specific rules 
//to access ther data/info (getters/setters()) 
//hiding data using access modifiers
//so they can only access by class members

/* In genral classes or Funs are simple example of encapsulation */

#include<iostream>
using namespace std;

//object of library is using data in library and methods so we create library class
class Library
{
  public:  
  int booksCount=0;
  
  
  void LibraryBC(int num)
  {
      booksCount += num;
  }

};
int main()
{
    Library obj;
    obj.LibraryBC(100);
    cout<<obj.booksCount<<endl;

    //here is a problem output  shoud be 300 but obj directly modify data
    obj.booksCount=200;
    cout<<obj.booksCount<<endl;
    return 0;
}
